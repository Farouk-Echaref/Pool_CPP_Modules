/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:29:07 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 03:59:57 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & src)
{
    this->_type = "Cat";
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & obj)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->_type = obj._type;

    return (*this);
} 

void    Cat::makeSound() const
{
    std::cout << "Default Cat Sound" << std::endl;
}