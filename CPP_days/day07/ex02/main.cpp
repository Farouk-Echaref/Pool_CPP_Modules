/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:11:58 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/30 17:09:36 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<float> frr;
    std::cout << frr.size() << std::endl;
    
    Array<int> arr(10);
    std::cout << arr.size() << std::endl;
    
    try
    {
        std::cout << arr[10] << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    Array<int> arr1(arr);

    std::cout << arr1.size() << std::endl;

    std::cout << arr[5] << std::endl;

    arr[5] = 1000;
    std::cout << arr[5] << std::endl;
    std::cout << arr1[5] << std::endl;
    
    
    // const Array<int> arr(2);

    // std::cout << arr[0] << std::endl;
    // arr[0] = 5;
    // std::cout << arr[0] << std::endl;
    
    return (0);
}