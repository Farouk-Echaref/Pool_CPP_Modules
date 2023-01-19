/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:20:28 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/19 15:31:18 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*Setup setters of the class: */

void    Contact::setFirstName(std::string _FirstName)
{
    this->_FirstName = _FirstName;
}

void    Contact::setLastName(std::string _LastName)
{
    this->_LastName = _LastName;
}

void    Contact::setNickName(std::string  _NickName)
{
    this->_NickName = _NickName;
}

void    Contact::setPhoneNumber(std::string _PhoneNumber)
{
   this->_PhoneNumber = _PhoneNumber;
}

void    Contact::setDarkestSecret(std::string _DarkestSecret)
{
    this->_DarkestSecret = _DarkestSecret;
}

/*Setup getters of the class: */

std::string    Contact::getFirstName(void) const
{
    return (this->_FirstName);
}

std::string     Contact::getLastName(void) const
{
    return (this->_LastName);
}

std::string     Contact::getNickName(void) const
{
    return (this->_NickName);
}

std::string Contact::getPhoneNumber(void) const
{
    return (this->_PhoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
    return (this->_DarkestSecret);
}