/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caseDouble.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:51:20 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/28 19:51:50 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.hpp"

int isDouble(char *str)
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
    }
    if (str[i] != '\0')
        return (0);
    return (1);
}

void castDouble(std::string str)
{
    double d;

    std::stringstream ss(str);
    ss >> d;

    if (!isprint(d))
        std::cout << "char: Non displayable" << std::endl;
    else
    {
        char c = static_cast<char>(d);
        std::cout << "char: " << c << std::endl;   
    }

    int n = static_cast<int>(d);
    std::cout << "int :" << n << std::endl;

    float f = static_cast<float>(d);
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;

    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}