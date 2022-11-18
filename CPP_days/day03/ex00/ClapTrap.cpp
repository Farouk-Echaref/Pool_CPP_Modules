/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:41:43 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/18 01:03:35 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name): _name(name), _hitPt(10), _energyPt(10), _attackDmg(0)
{
    std::cout << "ClapTrap constructor with string argument called called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & obj)
{
    std::cout << "ClapTrap assignment operator called" << std::endl;
    this->_name = obj._name;
    this->_hitPt = obj._hitPt;
    this->_energyPt = obj._energyPt;
    this->_attackDmg = obj._attackDmg;

    return (*this);
}

int ClapTrap::getEnergyPoits(void) const
{
    return (this->_energyPt);
}

int ClapTrap::getHitPoints(void) const
{
    return (this->_hitPt);
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_energyPt)
    {
        std::cout << "ClapTrap " << this->_name << " attacks" << target << ", causing " << this->_attackDmg << " points of damage" << std::endl; 
        this->_energyPt--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPt)
    {
        std::cout << "ClapTrap " << this->_name << " took damage" << std::endl;
        this->_hitPt -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPt)
    {
        std::cout << "ClapTrap " << this->_name << " repaired himself" << std::endl;
        this->_hitPt += amount;
        this->_energyPt--;
    }
}