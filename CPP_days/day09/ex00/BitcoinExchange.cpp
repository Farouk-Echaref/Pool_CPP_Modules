/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:47:40 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/18 23:45:51 by fech-cha         ###   ########.fr       */
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


void    Btc::setData(std::string key, std::string value)
{
    this->_db[key] = value;
}

void    Btc::readDB(std::string filename)
{
    std::string line;
    std::ifstream Src(filename);
    
    if (Src.is_open())
    {
        while (std::getline(Src, line))
            Btc::parseDB(line);
    }
    Src.close();
    
    return ;
}

void    Btc::parseDB(std::string line)
{
    std::string date, value;
    std::string delimiter = ",";
    size_t pos = 0;
    while ((pos = line.find(delimiter)) != std::string::npos) 
    {
        date = line.substr(0, pos);
        line.erase(0, pos + delimiter.length());
        value = line;
    }
    Btc::setData(date, value);
}

void    Btc::getInput(std::string filename)
{
    std::string line;
    std::ifstream Src(filename);
    
    if (Src.is_open())
    {
        while (std::getline(Src, line))
            Btc::parseDB(line);
    }
    Src.close();
    
    return ;
}

void    Btc::printOutput(const std::pair<std::string, std::string>& element, std::string rate)
{
    float value, tmp, result;
    std::stringstream val(element.second);
    val >> value;
    std::stringstream rat(rate);
    rat >> tmp;

    result = value * tmp;

    std::cout << element.first << " => " << element.second << " = " << result << std::endl;
}


