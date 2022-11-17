/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:25:29 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/17 20:07:54 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fp(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fp = nb;
    this->_fp = (this->_fp << this->_fract);
}

Fixed::Fixed(const float ft)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fp = std::roundf((ft * (1 << this->_fract)));
}

Fixed::Fixed(const Fixed & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;   
}


Fixed & Fixed::operator=(Fixed const & obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->_fp = obj.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fp);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fp = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->_fp / (float)(1 << this->_fract));
}


int Fixed::toInt(void) const
{
    return (this->_fp >> this->_fract);
}

std::ostream & operator<<(std::ostream & o, Fixed const & obj)
{
    o << obj.toFloat();
    return (o);
}