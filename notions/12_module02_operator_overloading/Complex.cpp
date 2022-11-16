/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Complex.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:23:29 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/15 23:37:10 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Complex.hpp"

Complex::Complex()
{
    std::cout << "Const of complex called." << std::endl; 
}

Complex::Complex(int real, int imag)
{
    this->_real = real;
    this->_imag = imag;  
}

Complex::~Complex()
{
    std::cout << "Deconst of complex called." << std::endl;
}

Complex Complex::operator + (Complex const &obj) const
{
    Complex res;

    res._real = this->_real + obj._real;
    res._imag = this->_imag + obj._imag;
    return (res);
}

void    Complex::print(void) const
{
    std::cout << "New Complex format is: " << this->_real << " + i" << this->_imag << std::endl;
}