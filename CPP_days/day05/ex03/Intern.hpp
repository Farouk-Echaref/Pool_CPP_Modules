/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:20:08 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/20 17:03:05 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();
        Intern & operator=(Intern const &obj);
        
        AForm*  makeForm(std::string formName, std::string target);
        class ChoiceError: public std::exception
        {
            public:
                 const char* what() const throw() 
                {
                    return ("Choice Error.");
                }
        };
};

#endif