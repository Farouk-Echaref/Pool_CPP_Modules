/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 03:25:22 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/17 17:28:42 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

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

        virtual Bureaucrat & operator=(Bureaucrat const & obj);
        
        std::string    getName() const;
        int    getGrade() const;
        
        void    increment();
        void    decrement();

        void    signForm(Form &form) const;
        void    executeForm(Form const & form);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj);

#endif