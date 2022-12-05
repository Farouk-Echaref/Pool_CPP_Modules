/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:29:07 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 04:56:09 by fech-cha         ###   ########.fr       */
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
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & obj)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->_type = obj._type;
    // delete old brain
    if (this->_brain)
    {
        delete this->_brain;
        this->_brain = NULL;
    }
    this->_brain = new Brain();
    *this->_brain = *obj._brain;
    return (*this);
} 

void    Cat::makeSound() const
{
    std::cout << "Default Cat Sound" << std::endl;
}

void    Cat::setIdea(const std::string & idea)
{
    this->_brain->setIdea(idea);
}

std::string Cat::getIdea(int pos) const
{
    return (this->_brain->getIdea(pos));
}