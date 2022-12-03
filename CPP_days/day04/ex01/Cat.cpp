/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:29:07 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/03 05:23:40 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain ; 
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