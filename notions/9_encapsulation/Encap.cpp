/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Encap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:55:50 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/09 00:09:30 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Encap.hpp"

Encap::Encap(void)
{
    std::cout << "Encap Const Called ." << std::endl;
    // this->set(69);
    return ;
}

Encap::~Encap(void)
{
    std::cout << "Encap Deonst Called ." << std::endl;
    return ;
}

void    Encap::set(int a)
{
    this->_privateInt = a;
}

int Encap::get(void)
{
    return (this->_privateInt);
}