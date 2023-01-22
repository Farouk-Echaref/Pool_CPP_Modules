/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:24:09 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/21 20:31:00 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int isNum(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    { 
      if(!isdigit(str[i]))
        return (-1);
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Input Error!" << std::endl;
        return (-1);
    }
    //checking input

    //case of char
    if (isalpha(argv[1][0]) && strlen(argv[1]) == 1)
    {
        char c = argv[1][0];

        int n = static_cast<char>(c);
        std::cout << "int: " << n << std::endl;

        float f = static_cast<float>(c);
        std::cout << "float: " << f << std::endl;

        double d = static_cast<double>(c);
        std::cout << "double: " << d << std::endl;
    }
    
    //case of Int
    if (!isNum(argv[1]))
    {
        int n = static_cast<int>(atoi(argv[1]));

        char c = static_cast<char>(n);
        std::cout << "char: " << c << std::endl;

        float f = static_cast<float>(n);
        std::cout << "float: " << f << std::endl;

        double d = static_cast<double>(n);
        std::cout << "double: " << d << std::endl;
    }

    //case of float
    
    return (0);
}