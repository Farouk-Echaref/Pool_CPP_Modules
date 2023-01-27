/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:37:20 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/27 22:48:10 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(Intern const & src)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = src;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern & Intern::operator=(Intern const & obj)
{
    (void)obj;
    std::cout << "Intern assignment operator called" << std::endl;
    
    return (*this);
}

AForm   *Intern::makeForm(std::string formName, std::string target)
{
    AForm *form;
    
    int i = ((formName == "Shruberry") * 1) + ((formName == "Robotomy") * 2) + ((formName == "Presidential") * 3);
    switch (i)
    {
        case 1:
            form = new ShrubberyCreationForm(target);
            break;
            
        case 2:
            form = new RobotomyRequestForm(target);
            break;
            
        case 3:
            form = new PresidentialPardonForm(target);
            break;
        
        default:
            throw Intern::ChoiceError();
    } 
    std::cout << "Intern creates " << form->getName() << std::endl;
    return (form);
}
