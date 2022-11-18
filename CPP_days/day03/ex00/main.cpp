/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:52:21 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/18 01:06:48 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("clap"), trap("trap");

    
    clap.attack("trap");
    std::cout << "Clap energy pts: " << clap.getEnergyPoits() << std::endl;
    trap.takeDamage(5);
        std::cout << "Trap hit points:" << trap.getHitPoints() << std::endl;
    trap.beRepaired(5);
    
    std::cout << "Trap hit points:" << trap.getHitPoints() << std::endl;
    return (0);
}