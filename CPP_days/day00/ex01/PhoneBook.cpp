/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:41:12 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/10 05:21:28 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::IncreaseContact(void)
{
    this->_CountContact++;
}

void    PhoneBook::Add(void)
{
    std::string info;
    int count;

    count = 0;
    while (count < 5)
    {
        std::cout << "FirstName: " << std::endl;
        std::getline(std::cin, info);
        if (info.empty())
            continue;
        if (count == 0)
        {
            this->_Contacts[this->_CountContact].setFirstName(info);
            count++;
        }
        std::cout << "LastName: " << std::endl;
        std::getline(std::cin, info);
        if (info.empty())
        {
            while (info.empty())  
            {
                std::cout << "LastName: " << std::endl;
                std::getline(std::cin, info);
            } 
        }
        if (count == 1)
        {
            this->_Contacts[this->_CountContact].setLastName(info);
            count++;
        }
        std::cout << "NickName: " << std::endl;
        std::getline(std::cin, info);
        if (info.empty())
        {
            while (info.empty())  
            {
                std::cout << "NickName: " << std::endl;
                std::getline(std::cin, info);
            } 
        }
        if (count == 2)
        {
            this->_Contacts[this->_CountContact].setNickName(info);
            count++;
        }
        std::cout << "PhoneNumber: " << std::endl;
        std::getline(std::cin, info);
        if (info.empty())
        {
            while (info.empty())  
            {
                std::cout << "PhoneNumber: " << std::endl;
                std::getline(std::cin, info);
            } 
        }
        if (count == 3)
        {
            this->_Contacts[this->_CountContact].setPhoneNumber(info);
            count++;
        }
        std::cout << "DarkestSecret: " << std::endl;
        std::getline(std::cin, info);
        if (info.empty())
        {
            while (info.empty())  
            {
                std::cout << "DarkestSecret: " << std::endl;
                std::getline(std::cin, info);
            } 
        }
        if (count == 4)
        {
            this->_Contacts[this->_CountContact].setDarkestSecret(info);
            count++;
        }
        
    }
    this->IncreaseContact();
}

void    PhoneBook::Search(void) const
{
    //display PhoneBook
    std::cout << "-------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "    index        |       First Name       |       Last Name       |       Nick Name        " << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------" << std::endl;
    for(int i = 0; i < this->_CountContact ; i++)
    {
        std::string FirstName = this->_Contacts[i].getFirstName();
        std::string LastName = this->_Contacts[i].getLastName();
        std::string NickName = this->_Contacts[i].getNickName();
        
        std::cout << "    "<< i <<"        |       " << FirstName << "       |       " << LastName << "       |       " << NickName << "        " << std::endl;
    }
    
    while (true)
    {
        int choice;

        std::cout << "Enter Index: " << std::endl;
        std::cin >> choice;
        if (choice >= 0 && choice < this->_CountContact)
        {
            std::cout << "Contact["<< choice << "] First Name: " << this->_Contacts[choice].getFirstName() << std::endl;
            std::cout << "Contact["<< choice << "] Last Name: " << this->_Contacts[choice].getLastName() << std::endl;
            std::cout << "Contact["<< choice << "] Nick Name: " << this->_Contacts[choice].getNickName() << std::endl;
            return ;
        }
        else
        {
            std::cout << "Invalid Index. " << std::endl;
            break;
        }
    }
}

void    PhoneBook::Exit(void) const
{
    std::cout << "Exit PhoneBook." << std::endl;
    exit(0);
}