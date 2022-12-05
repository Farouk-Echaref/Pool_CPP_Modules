/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:53:15 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 00:53:18 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & obj)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    this->_type = obj._type;

    return (*this);
} 

void    WrongCat::makeSound() const
{
    std::cout << "Default WrongCat Sound" << std::endl;
}