/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caseChar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:52:50 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/28 19:54:12 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.hpp"

int isNotNum(char *str)
{
    for(size_t i = 0; i < strlen(str) ; i++)
        if (isdigit(str[i]))
            return (0);
    return (1);
}

void castChar(char c)
{
    std::cout << "char: " << c << std::endl;
     
    int n = static_cast<char>(c);
    std::cout << "int: " << n << std::endl;

    float f = static_cast<float>(c);
    std::cout << "float: " << f << std::endl;

    double d = static_cast<double>(c);
    std::cout << "double: " << d << std::endl;
}