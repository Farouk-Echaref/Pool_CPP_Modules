/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:47:00 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/21 19:17:18 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream> 
#include <iomanip> 
#include <utility>
#include <time.h>
#include <exception> 

class Btc
{
    private:
        std::map<std::string, std::string>          _db;
        std::string                                 _date;
        float                                       _value;
        
    public:
        Btc();
        Btc(Btc const & src);
        ~Btc();
        Btc & operator=(Btc const & obj);

        void    readDB(std::string filename);
        void    getInput(std::string filename);
        void    parseDB(std::string line);
        void    setData(std::string key, std::string value);
        void    syntaxChecker(std::string line);
        void    execDB();
        void    printOutput(const std::pair<std::string, std::string>& element);     
};

bool isValidDate(const std::string& date);

#endif