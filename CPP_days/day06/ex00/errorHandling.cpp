/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorHandling.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:56:19 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/28 19:56:32 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.hpp"

void    errorInput(void)
{
    std::cout << "char: Impossible" << std::endl;
    std::cout << "int: Impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void    specialCases(std::string str, int *check)
{
    long l;
    
    std::stringstream ss(str);
    ss >> l;
    
    if (str == "-inf" || str == "-inff")
    {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        *check = 1;
    }
    else if (str == "+inf" || str == "+inff")
    {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        *check = 1;
    }
    else if (l > 2147483647 || l < -2147483648)
    {
        std::cout << "Overflow case, conversion is impossible." << std::endl;
        *check = 1;
    }
}