/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 21:12:27 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/20 16:56:25 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class Bureaucrat;
class AForm;
class ShrubberyCreationForm:public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        virtual ~ShrubberyCreationForm();
        virtual ShrubberyCreationForm & operator=(ShrubberyCreationForm const & obj);
        
        virtual void    execute(Bureaucrat const & executor) const;
};

#endif