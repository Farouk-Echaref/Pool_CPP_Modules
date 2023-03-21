/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorManagement.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:36:34 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/21 02:39:39 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool    checkYear(int year)
{
  // if year is divisible by 4 AND not divisible by 100
  // OR if year is divisible by 400
  // then it is a leap year
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    //return 1 if leap
    return (true);
  return (false);
}

bool isValidDate(const std::string& date)
{
    struct tm timeStruct;
    std::stringstream date_stream(date);
    std::string year_str, month_str, day_str;
    getline(date_stream, year_str, '-');
    getline(date_stream, month_str, '-');
    getline(date_stream, day_str, '-');
    int year = atoi(year_str.c_str());
    int month = atoi(month_str.c_str());
    int day = atoi(day_str.c_str());

    if (strptime(date.c_str(), "%Y-%m-%d", &timeStruct) == NULL) {
        return false;
    }
    if (checkYear(year) == false && month == 2 && day > 28)
        return false;
    return true;
}

void    Btc::syntaxChecker(std::string line)
{
    std::stringstream ss(line);
    std::string date_str;
    char separator;
    float value;  
    // Extract the date string, separator character, and value from the line
    ss >> date_str >> separator >> value;
    // Check that the date string is in the correct format (YYYY-MM-DD)
    if (!isValidDate(date_str) || separator != '|' || ss.fail() || !ss.eof())
    {
        throw std::runtime_error(std::string("Error: Bad input: ") + line + '.');
    }
    if (value > 1000)
        throw std::runtime_error(std::string("Error: too large a number."));
        
    if (value < 0)
        throw std::runtime_error(std::string("Error: not a positive number."));
        
    this->_date = date_str;
    this->_value = value;
}