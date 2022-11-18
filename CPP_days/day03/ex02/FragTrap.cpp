/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:34:40 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/18 05:48:54 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
    std::cout << "FragTrap constructor with string argument called called" << std::endl;
    this->_hitPt = 100;
    this->_energyPt = 100;
    this->_attackDmg = 30;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & obj)
{
    std::cout << "FragTrap assignment operator called" << std::endl;
    this->_name = obj._name;
    this->_hitPt = obj._hitPt;
    this->_energyPt = obj._energyPt;
    this->_attackDmg = obj._attackDmg;

    return (*this);
}

void    FragTrap::attack(const std::string &target)
{
    if (this->_energyPt)
    {
        std::cout << "FragTrap " << this->_name << " attacks" << target << ", causing " << this->_attackDmg << " points of damage" << std::endl; 
        this->_energyPt--;
    }
}

void    FragTrap::highFiveGuys(void) const
{
    std::cout << "Hive five from " << this->_name << std::endl;
}