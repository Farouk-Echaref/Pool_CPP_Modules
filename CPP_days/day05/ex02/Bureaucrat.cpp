/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:55:30 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/19 23:10:50 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Bureaucrat::Bureaucrat(): _name("Bureau"), _grade(100)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    std::cout << "Bureaucrat constructor called with parameters" << std::endl;
    this->_name = name;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj)
{
    std::cout << "Bureaucrat assignment operator called" << std::endl;
    this->_name = obj._name;
    this->_grade = obj._grade;

    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void    Bureaucrat::increment()
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void    Bureaucrat::decrement()
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void    Bureaucrat::signAForm(AForm &aform) const
{
    if (aform.getSign() == true)
    {
        std::cout << this->getName() << " signed " << aform.getName() << std::endl;
    }
    else
        std::cout << this->getName() << " couldn’t sign " << aform.getName() << "because the grade is too low." << std::endl;
}

void    Bureaucrat::executeAForm(AForm const & aform)
{
    if (aform.getSign() && this->getGrade() <= aform.getGradeExecute())
		std::cout << this->getName() << " executed " << aform.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't execute " << aform.getName() << std::endl;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() <<std::endl;
    return (o);
}