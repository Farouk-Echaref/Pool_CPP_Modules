/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:48:44 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/27 22:33:11 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
        //Shrubbery
        Bureaucrat FechBurr("FechBurr", 135);
        std::cout << FechBurr;

        ShrubberyCreationForm shru("FechShru");
        shru.beSigned(FechBurr);
        shru.execute(FechBurr);
        FechBurr.executeAForm(shru);

      //Robotomy
      //   Bureaucrat FechBurr("FechBurr", 15);
      //   std::cout << FechBurr;

      //   RobotomyRequestForm robot("FechRobot");
      //   robot.beSigned(FechBurr);
      //   robot.execute(FechBurr);
      //   FechBurr.executeAForm(robot);

      //President
      //  Bureaucrat FechBurr("FechBurr", 1);
      //   std::cout << FechBurr;

      //   PresidentialPardonForm pres("FechPres");
      //   pres.beSigned(FechBurr);
      //   pres.execute(FechBurr);
      //   FechBurr.executeAForm(pres);

      
   }
   catch(std::exception & e)
   {
    std::cerr << e.what() << std::endl;
   } 
}