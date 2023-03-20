/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorManagement.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:36:34 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/18 23:42:00 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isValidDate(const std::string& date)
{
    struct tm timeStruct;

    if (strptime(date.c_str(), "%Y-%m-%d", &timeStruct) == NULL) {
        return false;
    }
    return true;
}

void    Btc::execMap(void)
{
    std::map<std::string, std::string>::iterator it = this->_db.begin();
    for(; it != this->_db.end(); it++)
        std::cout << "map[\"" << it->first << "\"]" << " = " << it->second << std::endl;
}
