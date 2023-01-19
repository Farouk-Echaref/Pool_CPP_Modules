/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:53:18 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/19 16:02:42 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int validIndex(std::string index){
    return (index[0] >= '0' && index[0] <= '7' && index[1] == '\0');
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
        std::cout << FirstName.substr(0,10) << std::right;
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << LastName.substr(0,10) << std::right;
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << NickName.substr(0,10)  << std::right << std::endl;
    }
    
    std::cout << "Enter Index: " << std::endl;
    if (!std::getline(std::cin, choice))
        exit(1);
    if (validIndex(choice) && std::stoi(choice) < this->_CountContact)
    {
        std::cout << "Contact["<< choice << "] First Name: " << this->_Contacts[std::stoi(choice)].getFirstName() << std::endl;
        std::cout << "Contact["<< choice << "] Last Name: " << this->_Contacts[std::stoi(choice)].getLastName() << std::endl;
        std::cout << "Contact["<< choice << "] Nick Name: " << this->_Contacts[std::stoi(choice)].getNickName() << std::endl;
        std::cout << "Contact["<< choice << "] PhoneNumber: " << this->_Contacts[std::stoi(choice)].getPhoneNumber() << std::endl;
        std::cout << "Contact["<< choice << "] DarkestSecret: " << this->_Contacts[std::stoi(choice)].getDarkestSecret() << std::endl;
    }
    else
        std::cout << "Invalid Index. " << std::endl;
    return ;
}