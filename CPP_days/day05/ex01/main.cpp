/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:48:44 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/27 22:09:07 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
   try
   {
        Form form("form", 14, 15);
        Bureaucrat burr("Bureau", 13);
        
        form.beSigned(burr);
        burr.signForm(form);
        std::cout << form << std::endl; 
   }
   catch(const std::exception & e)
   {
        std::cerr << e.what() << std::endl;  
   }
   return(0);
}