/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:18:09 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/17 16:42:58 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): _target("ShrubberyCreationForm"), AForm("ShrubberyCreationForm", this->getSign(), 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target), AForm("ShrubberyCreationForm", this->getSign(), 145, 137)
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::string filename;

    filename = this->_target + "_shrubbery";
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExecute())
    {
        std::ofstream outfile (filename);
        outfile << "       _-_ \n\
    /~~   ~~\ \n\
 /~~         ~~\ \n\
{               } \n\
 \  _-     -_  / \n\
   ~  \\ //  ~ \n\
_- -   | | _- _ \n\
  _ -  | |   -_ \n\
      // \\ " << std::endl;
    }
    else
        throw ShrubberyCreationForm::GradeTooLowException();
}