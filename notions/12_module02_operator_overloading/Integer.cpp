/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:05:27 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/16 03:15:49 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

Integer::Integer(const int n): _n(n) 
{
    std::cout << "Const called with value :" << n << std::endl;
}

Integer::~Integer()
{
    std::cout << "Destructor called with value : " << this->_n << std::endl;
}

int Integer::getValue() const
{
    return (this->_n);
}

Integer & Integer::operator=(const Integer &rhs)
{
    std::cout << "Assignment operator called from : " << this->_n;
    std::cout << " To " << rhs.getValue() << std::endl;
    
    this->_n = rhs.getValue();

    return (*this);
}

Integer Integer::operator+(const Integer &rhs) const
{
    std::cout << "Addition operator called with " << this->_n ;
    std::cout << " and " << rhs.getValue() << std::endl;

    return (Integer(this->_n + rhs.getValue()));
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs){
	o << rhs.getValue();
	return o;
}