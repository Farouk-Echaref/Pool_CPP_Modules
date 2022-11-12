/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:50:24 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/12 02:42:59 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon), _name(name) 
{}

void    HumanA::attack(void)
{
    std::cout << this->_name << "  attacks with their " << this->_weapon.getType() << std::endl;
    return ;
}