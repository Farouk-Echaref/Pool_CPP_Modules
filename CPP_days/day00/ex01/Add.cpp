/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:54:35 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/19 16:01:57 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::Add(void)
{
    std::string info;
    int count;

    count = 0;
    while (count < 5)
    {
        std::cout << "FirstName: " << std::endl;
        if (!std::getline(std::cin, info))
            exit(1);
        if (info.empty())
            continue;
        if (count == 0)
        {
            this->_Contacts[this->_index].setFirstName(info);
            count++;
        }
        std::cout << "LastName: " << std::endl;
        if (!std::getline(std::cin, info))
            exit(1);
        if (info.empty())
        {
            while (info.empty())  
            {
                std::cout << "LastName: " << std::endl;
    
                if (!std::getline(std::cin, info))
                    exit(1);
            } 
        }
        if (count == 1)
        {
            this->_Contacts[this->_index].setLastName(info);
            count++;
        }
        std::cout << "NickName: " << std::endl;
        if (!std::getline(std::cin, info))
            exit(1);
        if (info.empty())
        {
            while (info.empty())  
            {
                std::cout << "NickName: " << std::endl;
    
                if (!std::getline(std::cin, info))
                    exit(1);
            } 
        }
        if (count == 2)
        {
            this->_Contacts[this->_index].setNickName(info);
            count++;
        }
        std::cout << "PhoneNumber: " << std::endl;
        if (!std::getline(std::cin, info))
            exit(1);
        if (info.empty())
        {
            while (info.empty())  
            {
                std::cout << "PhoneNumber: " << std::endl;
    
                if (!std::getline(std::cin, info))
                    exit(1);
            } 
        }
        if (count == 3)
        {
            this->_Contacts[this->_index].setPhoneNumber(info);
            count++;
        }
        std::cout << "DarkestSecret: " << std::endl;
        if (!std::getline(std::cin, info))
            exit(1);
        if (info.empty())
        {
            while (info.empty())  
            {
                std::cout << "DarkestSecret: " << std::endl;
    
                if (!std::getline(std::cin, info))
                    exit(1);
            } 
        }
        if (count == 4)
        {
            this->_Contacts[this->_index].setDarkestSecret(info);
            count++;
        } 
    }
    this->IncreaseContact();
    return ;
}
