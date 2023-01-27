/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:07:25 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/27 22:35:31 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("RobotomyRequestForm")
{
    std::cout << "RobotomyRequestForm constructor called." << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm constructor called with parameters." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & obj)
{
    std::cout << "RobotomyRequestForm assignment operator called." << std::endl;
    this->_target = obj._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExecute())
    {
        std::cout << "Drilling Noises !!!!!!" << std::endl;
    
        srand((unsigned) time(NULL));
        int random = rand();
    
        if (random % 2 == 1)
            std::cout << this->_target  << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy has failed." << std::endl;
    }
    else
        throw RobotomyRequestForm::GradeTooLowException();
}