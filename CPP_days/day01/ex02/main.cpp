/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:20:40 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/11 22:59:08 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// void    increment(int &ref)
// {
//     ref++;
// }

int main()
{
    // int n = 5;

    // increment(n);

    // std::cout << n << std::endl;
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of string: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << &stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: : " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}