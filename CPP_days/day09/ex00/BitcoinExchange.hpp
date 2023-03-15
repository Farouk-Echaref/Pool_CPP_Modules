/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:47:00 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/15 04:39:30 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map>
#include <algorithm>


class Btc
{
    private:
        std::map<std::string, int> _data;
        
    public:
        Btc();
        Btc(Btc const & src);
        ~Btc();
        Btc & operator=(Btc const & obj);

        void    readData(std::string filename);
};

#endif