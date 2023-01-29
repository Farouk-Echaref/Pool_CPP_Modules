/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 04:39:39 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/28 22:37:07 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::list<int> lst;

    lst.push_back(1);
    lst.push_back(4);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(23);
    lst.push_back(10);
    lst.push_front(-1);
    lst.push_back(69);
    lst.push_back(4);

    try
    {
        std::cout << *(::easyfind(lst, 69)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return (0);
}