/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:46:06 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/29 16:14:17 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap constructor with string argument called called" << std::endl;
    this->_hitPt = 100;
    this->_energyPt = 50;
    this->_attackDmg = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & obj)
{
    std::cout << "ScavTrap assignment operator called" << std::endl;
    this->_name = obj._name;
    this->_hitPt = obj._hitPt;
    this->_energyPt = obj._energyPt;
    this->_attackDmg = obj._attackDmg;

    return (*this);
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_energyPt)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage" << std::endl; 
        this->_energyPt--;
    }
}

void    ScavTrap::guardGate(void) const
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}