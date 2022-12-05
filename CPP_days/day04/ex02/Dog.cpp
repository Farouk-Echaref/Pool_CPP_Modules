/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 04:42:04 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 05:12:58 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & obj)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->_type = obj._type;
    if (this->_brain)
    {
        delete this->_brain;
        this->_brain = NULL;
    }
    this->_brain = new Brain();
    this->_brain = obj._brain;
    return (*this);
} 

void    Dog::makeSound() const
{
    std::cout << "Default Dog Sound" << std::endl;
}

void    Dog::setIdea(const std::string & idea)
{
    this->_brain->setIdea(idea);
}

std::string Dog::getIdea(int pos) const
{
    return (this->_brain->getIdea(pos));
}