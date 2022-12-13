/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:17:41 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/13 03:52:38 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("form"), _sign(false), _signGrade(100), _signExecute(30)
{
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const std::string name, bool sign, int const signGrade, int const signExecute): _sign(false), _signGrade(signGrade), _signExecute(signExecute)
{
    std::cout << "Form constructor called with parameters" << std::endl;
    if (signGrade < 1 || signExecute < 1)
        throw Form::GradeTooHighException();
    else if (signGrade > 150 || signGrade > 150)
        throw Form::GradeTooLowException();
}


Form::Form(Form const & src)
{
    std::cout << "Form copy constructor called" << std::endl;
    *this = src;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=(Form const & obj)
{
    std::cout << "Form assignment operator called" << std::endl;
    this->_name = obj._name;
    this->_grade = obj._grade;

    return (*this);
}

std::string Form::getName() const
{
    return (this->_name);
}

int Form::getGrade() const
{
    return (this->_grade);
}

void    Form::increment()
{
    if (this->_grade == 1)
        throw Form::GradeTooHighException();
    this->_grade--;
}

void    Form::decrement()
{
    if (this->_grade == 150)
        throw Form::GradeTooLowException();
    this->_grade++;
}

std::ostream & operator<<(std::ostream & o, Form const & obj)
{
    o << obj.getName() << ", Form grade " << obj.getGrade() <<std::endl;
    return (o);
}