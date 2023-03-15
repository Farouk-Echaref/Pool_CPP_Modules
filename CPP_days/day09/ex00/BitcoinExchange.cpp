/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:47:40 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/15 04:36:56 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc()
{
    std::cout << "Btc constructor called" << std::endl;
}

Btc::Btc(Btc const & src)
{
    std::cout << "Btc copy constructor called" << std::endl;
    *this = src;
}

Btc::~Btc()
{
    std::cout << "Btc destructor called" << std::endl;
}

Btc & Btc::operator=(Btc const & obj)
{
    std::cout << "Btc assignment operator called" << std::endl;
    return (*this);
}

