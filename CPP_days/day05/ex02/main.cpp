/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:48:44 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/19 23:05:37 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
//    try
//    {
//         AForm form("farouk", true, 100, 0);
//    }
//    catch(const std::exception & e)
//    {
//         std::cerr << e.what() << std::endl;  
//    }
//    return(0);

   try
   {
        Bureaucrat FechBurr("FechBurr", 135);
        std::cout << FechBurr;

        ShrubberyCreationForm shru("FechShru");
        shru.beSigned(FechBurr);
        shru.execute(FechBurr);
   }
   catch(std::exception & e)
   {
    std::cerr << e.what() << std::endl;
   } 
}