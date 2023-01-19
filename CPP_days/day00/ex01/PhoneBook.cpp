/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:41:12 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/19 16:02:35 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::IncreaseContact(void)
{
    if (this->_CountContact < 8)
        this->_CountContact++;
    if (this->_index < 8)
        this->_index++;
    if (this->_index >= 8)
        this->_index = 0;
}

void    PhoneBook::Exit(void) const
{
    std::cout << "Exit PhoneBook." << std::endl;
    exit(0);
}