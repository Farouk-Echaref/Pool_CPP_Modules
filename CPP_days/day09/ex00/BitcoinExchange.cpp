/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:47:40 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/17 00:04:24 by fech-cha         ###   ########.fr       */
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

void    Btc::execMap(void)
{
    std::map<std::string, std::string>::iterator it = this->_data.begin();
    for(; it != this->_data.end(); it++)
        // std::cout << "map[\"" << it->first << "\"]" << " = " << it->second << std::endl;
        execDB(*it);
}

void    Btc::execDB(const std::pair<std::string, std::string>& element)
{
    std::string path = "./cpp_09/data.csv";

    std::string line;
    std::ifstream Src(path);
    if (Src.is_open())
    {
        while (std::getline(Src, line))
        {
            std::string delimiter = ",";
            size_t pos = 0;
            while ((pos = line.find(delimiter)) != std::string::npos) 
            {
                this->_date = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
                this->_value = line;
            }
            if (this->_date == element.first)
            {
                // std::cout << "Found str: " << element.first << std::endl;  
                Btc::printOutput(element, this->_value);
            }
        }
    }
    Src.close();
}
