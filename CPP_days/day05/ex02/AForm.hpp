/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:04:35 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/27 22:12:47 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
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
        AForm(const std::string name, int const signGrade, int const gradeExecute);
        AForm(AForm const & src);
        virtual ~AForm();

        AForm & operator=(AForm const & obj);
        
        virtual std::string    getName() const;
        virtual bool   getSign() const;
        virtual int    getSignGrade() const;
        virtual int    getGradeExecute() const;
        virtual void   beSigned(Bureaucrat &Bur);
        virtual void   execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & o, AForm const & obj);

#endif