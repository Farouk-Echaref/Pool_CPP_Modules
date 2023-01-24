/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:54:35 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/24 15:18:09 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::Add(void)
{
    std::string firstName, lastName, nickName, phoneNumber, darkSecret;
    
    while (firstName.empty() || (firstName.find_first_not_of(" \t") == std::string::npos))
    {
        std::cout << "firstName: " << std::endl;
        if (!std::getline(std::cin, firstName))
            exit(1);
    }
    this->_Contacts[this->_index].setFirstName(firstName);
    while (lastName.empty() || (lastName.find_first_not_of(" \t") == std::string::npos))
    {
        std::cout << "lastName: " << std::endl;
        if (!std::getline(std::cin, lastName))
            exit(1);
    }
    this->_Contacts[this->_index].setLastName(lastName);
    while (nickName.empty() || (nickName.find_first_not_of(" \t") == std::string::npos))
    {
        std::cout << "nickName: " << std::endl;
        if (!std::getline(std::cin, nickName))
            exit(1);
    }
    this->_Contacts[this->_index].setNickName(nickName);
    while (phoneNumber.empty() || (phoneNumber.find_first_not_of(" \t") == std::string::npos))
    {
        std::cout << "phoneNumber: " << std::endl;
        if (!std::getline(std::cin, phoneNumber))
            exit(1);
    }
    this->_Contacts[this->_index].setPhoneNumber(phoneNumber);
    while (darkSecret.empty() || (darkSecret.find_first_not_of(" \t") == std::string::npos))
    {
        std::cout << "darkSecret: " << std::endl;
        if (!std::getline(std::cin, darkSecret))
            exit(1);
    }
    this->_Contacts[this->_index].setDarkestSecret(darkSecret);
    this->IncreaseContact();
    return ;
}