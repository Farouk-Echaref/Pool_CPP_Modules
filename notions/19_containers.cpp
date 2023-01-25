/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   19_containers.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:05:33 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/25 13:40:05 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include <algorithm>

int main(void)
{
    // int arr[10];

    // arr[17] = 6;

    // std::cout << arr[17] << std::endl;

    std::array<int, 5> brr;

    //this won't compile in debug mode
    // brr[17] = 7;
    // std::cout << brr.size() << std::endl;
    // std::cout << brr.data() << std::endl;

    //to fill the standard array we can use 

    // for (int i = 0; i < brr.size(); i++)
    //     brr[i] = i;

    //or use an iterator 

    for (std::array<int, 5>::iterator i = brr.begin(); i != brr.end(); i++)
        *i = 5;
    std::cout << brr[2] << std::endl;

    //using algorithms

    std::fill(brr.begin(), brr.end(), 69);
    std::cout << brr[2] << std::endl;

    //initialization list
    brr = {1, 2, 3, 4, 5};

    return (0);
}