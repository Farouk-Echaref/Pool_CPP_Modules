/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:47:00 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/16 01:26:23 by fech-cha         ###   ########.fr       */
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

class Btc
{
    private:
        std::multimap<std::string, float> _data;
        
    public:
        Btc();
        Btc(Btc const & src);
        ~Btc();
        Btc & operator=(Btc const & obj);

        void    readData(std::string filename);
        int     parseData(std::string line);
        void    setData(std::string str, float ft);
        void    printMap(void);
};

#endif