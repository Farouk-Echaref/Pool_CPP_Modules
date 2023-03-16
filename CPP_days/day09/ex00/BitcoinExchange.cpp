/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:47:40 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/16 22:53:40 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//Error management

// static bool isValidDate(const std::string& date)
// {
//     struct tm timeStruct;

//     if (strptime(date.c_str(), "%Y-%m-%d", &timeStruct) == NULL) {
//         return false;
//     }
//     return true;
// }

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
    (void)obj;
    std::cout << "Btc assignment operator called" << std::endl;
    return (*this);
}

void    Btc::printMap(void)
{
    std::map<std::string, std::string>::iterator it = this->_data.begin();
    for(; it != this->_data.end(); it++)
        std::cout << "map[\"" << it->first << "\"]" << " = " << it->second << std::endl;
}

void    Btc::setData(std::string key, std::string value)
{
    this->_data.insert(std::make_pair(key, value));
}


void    Btc::parseData(std::string line)
{
   std::string date,sep,value,rest;
    std::istringstream test(line);

    test>>date>>sep>>value>>rest;
    Btc::setData(date, value);
}

void    Btc::readData(std::string filename)
{
    std::string line;
    std::ifstream Src(filename);
    
    if (Src.is_open())
    {
        while (std::getline(Src, line))
            Btc::parseData(line);
    }
    Src.close();
    
    return ;
}
