/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:59:20 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/08 23:34:54 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample(void): _privateFoo(69)
{
    this->publicFoo = 420;
    std::cout << "Const called" << std::endl;
    this->publicBar();
    this->_privateBar();
}

Sample::~Sample(void)
{
    std::cout << "Deonst called" << std::endl;
}

void    Sample::publicBar(void) const
{
    std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
    return;
}

void    Sample::_privateBar(void) const
{
    std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;
    return;
}
