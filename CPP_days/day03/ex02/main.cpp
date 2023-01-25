/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:52:21 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/25 22:26:21 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("clap"), trap("trap");
    ScavTrap scav("scav"), scavT("scavT");
    FragTrap frag("frag"), Tfrag("Tfrag");

    
    clap.attack("trap");
    std::cout << "Clap energy pts: " << clap.getEnergyPoits() << std::endl;
    trap.takeDamage(5);
    std::cout << "Trap hit points:" << trap.getHitPoints() << std::endl;
    trap.beRepaired(5);
    
    std::cout << "Trap hit points:" << trap.getHitPoints() << std::endl;

    scav.attack("scavt");
    std::cout << "scav energy pts: " << scav.getEnergyPoits() << std::endl;
    scavT.takeDamage(5);
    std::cout << "scavT hit points:" << scavT.getHitPoints() << std::endl;
    scavT.beRepaired(5);
    
    std::cout << "scavT hit points:" << scavT.getHitPoints() << std::endl;

    frag.attack("Tfrag");
    std::cout << "frag energy pts: " << frag.getEnergyPoits() << std::endl;
    Tfrag.takeDamage(5);
    std::cout << "Tfrag hit points:" << Tfrag.getHitPoints() << std::endl;
    Tfrag.beRepaired(5);
    
    std::cout << "Tfrag hit points:" << Tfrag.getHitPoints() << std::endl;
    Tfrag.highFiveGuys();

    
    return (0);
}