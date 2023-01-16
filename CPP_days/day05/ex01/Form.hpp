/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:04:35 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/16 16:33:41 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool _sign;
        const int _signGrade;
        const int _gradeExecute;
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
        Form();
        Form(const std::string name, bool sign, int const signGrade, int const gradeExecute);
        Form(Form const & src);
        virtual ~Form();

        virtual Form & operator=(Form const & obj);
        
        std::string    getName() const;
        bool   getSign() const;
        int    getSignGrade() const;
        int    getGradeExecute() const;
};

std::ostream & operator<<(std::ostream & o, Form const & obj);

#endif