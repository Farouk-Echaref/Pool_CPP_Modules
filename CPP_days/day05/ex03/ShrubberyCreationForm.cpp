/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:18:09 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/27 22:38:59 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("ShrubberyCreationForm")
{
    std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
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
    this->_target = obj._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::string filename;

    filename = this->_target + "_shrubbery";
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExecute())
    {
        std::ofstream outfile (filename);
        outfile << "       _-_ \n\
    /~~   ~~\\ \n\
 /~~         ~~\\ \n\
{               } \n\
 \\  _-     -_  / \n\
   ~  \\ //  ~ \n\
_- -   | | _- _ \n\
  _ -  | |   -_ \n\
      // \\ " << std::endl;
      outfile.close();
    }
    else
        throw ShrubberyCreationForm::GradeTooLowException();
}