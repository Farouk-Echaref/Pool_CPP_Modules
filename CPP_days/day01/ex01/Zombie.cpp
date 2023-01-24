/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 06:24:47 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/24 15:53:19 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Constructor called" << std::endl;
}

 Zombie::~Zombie(void)
{
    std::cout << this->_name << " is dead for good. " << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{}

void   Zombie::setName(std::string name)
{
    this->_name = name;
} 

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}