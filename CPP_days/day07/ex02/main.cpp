/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:11:58 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/24 01:22:27 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> arr(10);

    // std::cout << arr.size() << std::endl;
    // try
    // {
    //     std::cout << arr[8] << std::endl;
    // }
    // catch(const std::string & e)
    // {
    //     std::cerr << e << '\n';
    // }

    Array<int> arr1(arr);

    // std::cout << arr1.size() << std::endl;

    std::cout << arr[5] << std::endl;

    arr[5] = 1000;
    std::cout << arr[5] << std::endl;
    std::cout << arr1[5] << std::endl;
    
    return (0);
}