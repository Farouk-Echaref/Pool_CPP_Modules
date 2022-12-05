/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 04:42:04 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 04:00:17 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
    this->_type = "Dog";
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & obj)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->_type = obj._type;

    return (*this);
} 

void    Dog::makeSound() const
{
    std::cout << "Default Dog Sound" << std::endl;
}