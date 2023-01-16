/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:18:09 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/16 22:49:12 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): _target("ShrubberyCreationForm"), AForm("ShrubberyCreationForm", false, 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target), AForm("ShrubberyCreationForm", false, 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor called with parameters." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj)
{
    std::cout << "ShrubberyCreationForm assignment operator called." << std::endl;
    return (*this);
}