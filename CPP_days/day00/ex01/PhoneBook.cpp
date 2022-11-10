/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:41:12 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/10 18:25:36 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int validIndex(std::string index){
    return (index[0] >= '0' && index[0] <= '7' && index[1] == '\0');
}

void    PhoneBook::IncreaseContact(void)
{
    if (this->_CountContact < 8)
        this->_CountContact++;
    if (this->_index < 8)
        this->_index++;
    if (this->_index >= 8)
        this->_index = 0;
    
}

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

void    PhoneBook::Search(void) const
{
    std::string choice;
    
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "index" << std::right; 
    std::cout << "|" << std::setw(10);
    std::cout << "First Name" << std::right << "|";
    std::cout << std::setw(10) << "Last Name" << std::right;
    std::cout << "|" << std::setw(10);
    std::cout << "Nick Name" << std::right << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    
    for(int i = 0; i < _CountContact; i++)
    {
        std::string FirstName = this->_Contacts[i].getFirstName();
        std::string LastName = this->_Contacts[i].getLastName();
        std::string NickName = this->_Contacts[i].getNickName();
        
        std::cout << std::setw(10);
        std::cout << i << std::right; 
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << FirstName << std::right;
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << LastName << std::right;
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << NickName  << std::right << std::endl;
    }
    
    std::cout << "Enter Index: " << std::endl;
    if (!std::getline(std::cin, choice))
        exit(1);
    if (validIndex(choice) && std::stoi(choice) < this->_CountContact)
    {
        std::cout << "Contact["<< choice << "] First Name: " << this->_Contacts[std::stoi(choice)].getFirstName() << std::endl;
        std::cout << "Contact["<< choice << "] Last Name: " << this->_Contacts[std::stoi(choice)].getLastName() << std::endl;
        std::cout << "Contact["<< choice << "] Nick Name: " << this->_Contacts[std::stoi(choice)].getNickName() << std::endl;
    }
    else
        std::cout << "Invalid Index. " << std::endl;
    return ;
}

void    PhoneBook::Exit(void) const
{
    std::cout << "Exit PhoneBook." << std::endl;
    exit(0);
}