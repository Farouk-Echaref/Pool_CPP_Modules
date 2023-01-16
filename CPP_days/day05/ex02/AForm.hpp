/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:04:35 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/16 19:45:24 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
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
        AForm();
        AForm(const std::string name, bool sign, int const signGrade, int const gradeExecute);
        AForm(AForm const & src);
        virtual ~AForm();

        virtual AForm & operator=(AForm const & obj);
        
        virtual std::string    getName() const = 0;
        virtual bool   getSign() const = 0;
        virtual int    getSignGrade() const = 0;
        virtual int    getGradeExecute() const = 0;
        virtual void   beSigned(Bureaucrat &Bur) = 0;
};

std::ostream & operator<<(std::ostream & o, AForm const & obj);

#endif