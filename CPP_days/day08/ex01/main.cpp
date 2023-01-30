/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:49:21 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/30 23:15:48 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    Span sp = Span(5);

    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(12);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    
    // std::vector<int> test;

    // test.push_back(1);
    // test.push_back(2);
    // test.push_back(4);
    // test.push_back(8);
    // test.push_back(16);
    // test.push_back(32);
    // test.push_back(64);
    
    // try
    // {
    //     sp.customAdd(test.begin(), test.end());
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    
    // std::cout << sp.longestSpan() << std::endl;
    // std::cout << sp.shortestSpan() << std::endl;

    return (0);
}