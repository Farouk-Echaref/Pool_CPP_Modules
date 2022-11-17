/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:25:29 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/17 18:07:58 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//default constructor
Fixed::Fixed(void): _fp(0)
{
    std::cout << "Default constructor called" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

//A constructor that takes a constant integer
Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fp = nb;
    this->_fp = (this->_fp << this->_fract);
}

//A constructor that takes a constant float
Fixed::Fixed(const float ft)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fp = std::roundf((ft * (1 << this->_fract)));
}

//Destrucotr
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;   
}

// arithmetic operators: +, -, *, and /
Fixed & Fixed::operator=(Fixed const & obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->_fp = obj.getRawBits();
    return (*this);
}

Fixed   Fixed::operator+(Fixed const & obj) const
{
    return (Fixed(this->_fp + obj.getRawBits()));
}

Fixed   Fixed::operator-(Fixed const & obj) const
{
    return (Fixed(this->_fp - obj.getRawBits()));
}

Fixed   Fixed::operator*(Fixed const & obj) const
{
    long long tmp;

    tmp = this->_fp * obj.getRawBits();
    tmp = tmp >> this->_fract;
    return (Fixed((int)tmp));
}

Fixed   Fixed::operator/(Fixed const & obj) const
{
    return (Fixed(((this->_fp << this->_fract) / obj.getRawBits())));
}


//comparison operators: >, <, >=, <=, == and !=
int Fixed::operator<(Fixed const & obj) const
{
    return (this->_fp < obj.getRawBits());
}

int Fixed::operator<=(Fixed const & obj) const
{
    return (this->_fp <= obj.getRawBits());
}

int Fixed::operator>(Fixed const & obj) const
{
    return !(*this < obj);
}

int Fixed::operator>=(Fixed const & obj) const
{
    return !(*this <= obj);
}

int Fixed::operator==(Fixed const & obj) const
{
    return (this->_fp == obj.getRawBits());
}

int Fixed::operator!=(Fixed const & obj) const
{
    return !(*this == obj);
}


// increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement)
Fixed & Fixed::operator++(void)
{
    this->_fp++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->_fp++;
    return (temp);
}

Fixed & Fixed::operator--(void)
{
    this->_fp--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->_fp--;
    return (temp);
}

//Min/Max
Fixed & Fixed::min(Fixed & obj1, Fixed & obj2)
{
    Fixed & res = (obj1 < obj2) ? obj1 : obj2;
    return (res);
}

Fixed const & Fixed::min(Fixed const & obj1, Fixed const & obj2)
{
    Fixed const & res = (obj1 < obj2) ? obj1 : obj2;
    return (res);
}

Fixed & Fixed::max(Fixed & obj1, Fixed & obj2)
{
    Fixed & res = (obj1 > obj2) ? obj1 : obj2;
    return (res);
}

Fixed const & Fixed::max(Fixed const & obj1, Fixed const & obj2)
{
    Fixed const & res = (obj1 > obj2) ? obj1 : obj2;
    return (res);
}



//member fucntions
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