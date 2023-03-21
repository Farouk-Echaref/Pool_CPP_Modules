/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:47:40 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/21 03:30:12 by fech-cha         ###   ########.fr       */
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
    int flag;
    std::string line;
    std::ifstream Src(filename);
    
    if (Src.is_open())
    {
        while (std::getline(Src, line))
        {   
            flag = 1;
            try
            {
                Btc::syntaxChecker(line);
            }
            catch(const std::exception& e)
            {
                flag = 0;
                std::cerr << e.what() << '\n';
            }
            if (flag == 1)
            {
                try
                {
                    Btc::execDB();
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
            }
        }
    }
    Src.close();
    return ;
}

void    Btc::execDB()
{
    std::map<std::string, std::string>::iterator itlow = this->_db.lower_bound(this->_date);
    if(itlow->first == this->_date)
        Btc::printOutput(*itlow);
    else if(itlow != this->_db.begin())
    {
        itlow--;
        Btc::printOutput(*itlow);        
    }
    else
        throw std::runtime_error(std::string("Error: Date not found."));
}

void    Btc::printOutput(const std::pair<std::string, std::string>& element)
{
    float rate, result;
    std::stringstream rat(element.second);
    rat >> rate;

    result = rate * this->_value;

    std::cout << this->_date << " => " << this->_value << " = " << result << std::endl;
}


