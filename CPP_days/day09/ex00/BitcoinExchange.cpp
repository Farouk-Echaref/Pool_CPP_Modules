/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:47:40 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/16 01:31:46 by fech-cha         ###   ########.fr       */
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
    (void)obj;
    std::cout << "Btc assignment operator called" << std::endl;
    return (*this);
}

void    Btc::printMap(void)
{
    std::map<std::string, float>::iterator it = this->_data.begin();
    for(; it != this->_data.end(); it++)
        std::cout << "map[\"" << it->first << "\"]" << " = " << it->second << std::endl;
}

void    Btc::setData(std::string str, float ft)
{
    this->_data.insert(std::make_pair(str, ft));
}

int Btc::parseData(std::string line)
{
    float value;
    std::string key;
    
    char delim[] = " |";

    char *token = strtok(&line[0], delim);
    key = token;
    while (token != NULL)
    {
        token = strtok(NULL, delim);
        if (token != NULL)
        {
            std::string tmp = token;
            std::stringstream ss(tmp);
            ss >> value;
        }
    }
    Btc::setData(key, value);

    return (0);
}

void    Btc::readData(std::string filename)
{
    std::string line;
    std::ifstream Src(filename);
    
    if (Src.is_open())
    {
        while (std::getline(Src, line))
        {
            if (Btc::parseData(line) < 0)
            {
                
            }
        }
    }
    Src.close();
    
    return ;
}
