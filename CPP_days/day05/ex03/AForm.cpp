/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:17:41 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/16 17:23:10 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("AForm"), _sign(false), _signGrade(100), _gradeExecute(30)
{
    std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(const std::string name, int const signGrade, int const gradeExecute): _name(name), _sign(false), _signGrade(signGrade), _gradeExecute(gradeExecute)
{
    std::cout << "AForm constructor called with parameters" << std::endl;
    if (signGrade < 1 || gradeExecute < 1)
        throw AForm::GradeTooHighException();
    else if (signGrade > 150 || gradeExecute > 150)
        throw AForm::GradeTooLowException();
}


AForm::AForm(AForm const & src): _name(src.getName()), _signGrade(src.getSignGrade()), _gradeExecute(src.getGradeExecute())
{
    std::cout << "AForm copy constructor called" << std::endl;
    *this = src;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

AForm & AForm::operator=(AForm const & obj)
{
    std::cout << "AForm assignment operator called" << std::endl;
    this->_sign = obj._sign;
    
    return (*this);
}

std::string AForm::getName() const
{
    return (this->_name);
}

bool AForm::getSign() const
{
    return (this->_sign);
}

int AForm::getSignGrade() const
{
    return (this->_signGrade);
}

int AForm::getGradeExecute() const
{
    return (this->_gradeExecute);
}

void    AForm::beSigned(Bureaucrat &Bur)
{
    if (Bur.getGrade() <= this->getSignGrade())
        this->_sign = true;
    else
        throw AForm::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, AForm const & obj)
{
    o << "AForm name:" << obj.getName() << std::endl << "AForm sign: " << obj.getSign() <<std::endl << "AForm signGrade: " << obj.getSignGrade() << std::endl << "AForm gradeExecute:" << obj.getGradeExecute() << std::endl;
    return (o);
}