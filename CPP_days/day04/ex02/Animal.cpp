/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:47:52 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 05:21:17 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & obj)
{
    std::cout << "Animal assignment operator called" << std::endl;
    this->_type = obj._type;

    return (*this);
}

std::string    Animal::getType() const
{
    return (this->_type);
}