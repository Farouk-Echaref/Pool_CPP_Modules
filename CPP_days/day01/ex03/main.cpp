/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:32:47 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/12 02:35:06 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
   {
      Weapon club = Weapon("crude spiked club");
      HumanA bob("Bob", club);
      bob.attack();
      club.setType("some other type of club");
      bob.attack();
   }
   {
      Weapon club = Weapon("crude spiked club");
      HumanB jim("Jim");
      jim.setWeapon(club);
      jim.attack();
      club.setType("some other type of club");
      jim.attack();
   }  
   return 0;   
}