/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:17:41 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/16 16:22:38 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("form"), _sign(false), _signGrade(100), _gradeExecute(30)
{
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const std::string name, bool sign, int const signGrade, int const gradeExecute): _sign(false), _signGrade(signGrade), _gradeExecute(gradeExecute)
{
    std::cout << "Form constructor called with parameters" << std::endl;
    if (signGrade < 1 || gradeExecute < 1)
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
    this->_sign = obj._sign;
    
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