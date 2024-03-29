/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:02:40 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/24 18:42:07 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL), _name(name)
{}

void    HumanB::setWeapon(Weapon &weaponRef)
{
    this->_weapon = &weaponRef;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << "  attacks with their " << (*this->_weapon).getType() << std::endl;
    return ;
}