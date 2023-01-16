/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:19:05 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/16 23:19:53 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): _target("PresidentialPardonForm"), AForm("PresidentialPardonForm", false, 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target), AForm("PresidentialPardonForm", false, 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called with parameters." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & obj)
{
    std::cout << "PresidentialPardonForm assignment operator called." << std::endl;
    return (*this);
}