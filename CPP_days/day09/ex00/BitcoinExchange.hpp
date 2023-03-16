/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:47:00 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/16 22:54:17 by fech-cha         ###   ########.fr       */
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

class Btc
{
    private:
        std::multimap<std::string, std::string>   _data;
        
    public:
        Btc();
        Btc(Btc const & src);
        ~Btc();
        Btc & operator=(Btc const & obj);

        void    readData(std::string filename);
        void    parseData(std::string line);
        void    execDB();
        void    setData(std::string key, std::string value);
        void    printMap(void);
};

#endif