/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 03:25:22 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/27 22:39:25 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
    private:
        std::string _name;
        int         _grade;
    public:
        class GradeTooHighException:public std::exception
        {
            public:
                const char* what() const throw() 
                {
                    return ("Grade Too High.");
                }
        };
        class GradeTooLowException:public std::exception
        {
             public:
                const char* what() const throw() 
                {
                    return ("Grade Too Low.");
                }
        };
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        virtual ~Bureaucrat();

        Bureaucrat & operator=(Bureaucrat const & obj);
        
        std::string    getName() const;
        int    getGrade() const;
        
        void    increment();
        void    decrement();

        void    signAForm(AForm &aform) const;
        void    executeAForm(AForm const & aform);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj);

#endif