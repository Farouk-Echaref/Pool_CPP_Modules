/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:24:09 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/22 21:18:35 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip> 
#include <iostream>
#include <sstream> 

int isInt(char *str)
{
    int i = 0;
    if (str[i] == '-')
        i++;
    while(isdigit(str[i]) && str[i])
        i++;
    if (!isdigit(str[i]) && str[i] != '\0')
        return (-1);
    return (1);
}

int isFloat(char *str)
{
    int i = 0;
    if (str[i] == '-')
        i++;
    while(isdigit(str[i]) && str[i])
        i++;
    if (str[i] != '.')
        return (-1);
    else
    {
        i++;
        while(isdigit(str[i]) && str[i])
            i++;
        if (str[i] == 'f' && str[i+1] == '\0')
            return (1);
    }
    return (-1);
}

int isDouble(char *str)
{
    int i = 0;
    if (str[i] == '-')
        i++;
    while(isdigit(str[i]) && str[i])
        i++;
    if (str[i] != '.')
        return (-1);
    else
    {
        i++;
        while(isdigit(str[i]) && str[i])
            i++;
    }
    if (str[i] != '\0')
        return (-1);
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

void castDouble(std::string str)
{
    
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Arguments Error!" << std::endl;
        return (-1);
    }
    std::string str = argv[1];

    // //case of char
    if (strlen(argv[1]) == 1 && isalpha(argv[1][0]))
        castChar(argv[1][0]);
    
    //case of Int
    if (isInt(argv[1]) > 0)
       castInt(argv[1]);

    //case of float
    else if(isFloat(argv[1]))
        castFloat(str);

    //case of double
    else if(isDouble(argv[1]))
        
    
    return (0);
}