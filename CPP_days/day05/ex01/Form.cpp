/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:17:41 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/16 17:23:10 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("form"), _sign(false), _signGrade(100), _gradeExecute(30)
{
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const std::string name, bool sign, int const signGrade, int const gradeExecute): _name(name), _sign(sign), _signGrade(signGrade), _gradeExecute(gradeExecute)
{
    std::cout << "Form constructor called with parameters" << std::endl;
    if (signGrade < 1 || gradeExecute < 1)
        throw Form::GradeTooHighException();
    else if (signGrade > 150 || gradeExecute > 150)
        throw Form::GradeTooLowException();
}


Form::Form(Form const & src): _name(src.getName()), _signGrade(src.getSignGrade()), _gradeExecute(src.getGradeExecute())
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

bool Form::getSign() const
{
    return (this->_sign);
}

int Form::getSignGrade() const
{
    return (this->_signGrade);
}

int Form::getGradeExecute() const
{
    return (this->_gradeExecute);
}

void    Form::beSigned(Bureaucrat &Bur)
{
    if (Bur.getGrade() <= this->getSignGrade())
        this->_sign = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Form const & obj)
{
    o << "Form name:" << obj.getName() << std::endl << "Form sign: " << obj.getSign() <<std::endl << "Form signGrade: " << obj.getSignGrade() << std::endl << "Form gradeExecute:" << obj.getGradeExecute() << std::endl;
    return (o);
}