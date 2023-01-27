/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:48:44 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/27 22:50:31 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
   try
   {
      	Bureaucrat test("test", 2);
		std::cout << test << std::endl;

		// ShrubberyCreationForm s("shrubbery");
		// s.beSigned(test);
		// s.execute(test);
		// test.executeAForm(s);

		// RobotomyRequestForm r("robot");
		// r.beSigned(test);
		// r.execute(test);
		// test.executeAForm(r);

		// PresidentialPardonForm p("president");
		// p.beSigned(test);
		// p.execute(test);
		// test.executeAForm(p);

		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("Shruberry", "Bender");
		rrf->beSigned(test);
		rrf->execute(test);
		delete rrf;
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
   }
   
   
}