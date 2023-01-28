/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CaseInt.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:53:14 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/28 19:53:29 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.hpp"

int isInt(char *str)
{
    int i = 0;
    if (str[i] == '-')
        i++;
    while(isdigit(str[i]) && str[i])
        i++;
    if (!isdigit(str[i]) && str[i] != '\0')
        return (0);
    return (1);
}

void    castInt(char *str)
{
    int n = static_cast<int>(atoi(str));

    if (!isprint(n))
        std::cout << "char: Non displayable" << std::endl;
    else
    {
        char c = static_cast<char>(n);
        std::cout << "char: " << c << std::endl;   
    }
    
    std::cout << "int: " << n << std::endl;
    
    float f = static_cast<float>(n);
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;

    double d = static_cast<double>(n);
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
