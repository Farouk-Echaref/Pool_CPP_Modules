/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:50:07 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 00:50:28 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & obj)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->_type = obj._type;

    return (*this);
}

std::string    WrongAnimal::getType() const
{
    return (this->_type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Default WrongAnimal Sound" << std::endl;
}