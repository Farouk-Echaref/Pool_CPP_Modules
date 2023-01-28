/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caseFloat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:49:47 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/28 19:50:19 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.hpp"

int isFloat(char *str)
{
    int i = 0;
    if (str[i] == '-')
        i++;
    while(isdigit(str[i]) && str[i])
        i++;
    if (str[i] != '.')
        return (0);
    else
    {
        i++;
        while(isdigit(str[i]) && str[i])
            i++;
        if (str[i] == 'f' && str[i+1] == '\0')
            return (1);
    }
    return (0);
}

void    castFloat(std::string str)
{
    float f;
    
    std::string ft = str.substr(0, str.length() - 1);

    std::stringstream ss(ft);
    ss >> f;
    
    if (!isprint(f))
        std::cout << "char: Non displayable" << std::endl;
    else
    {
        char c = static_cast<char>(f);
        std::cout << "char: " << c << std::endl;   
    }
    
    int n = static_cast<int>(f);
    std::cout << "int :" << n << std::endl;

    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;

    double d = static_cast<double>(f);
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}