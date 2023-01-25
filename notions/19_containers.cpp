/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   19_containers.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:05:33 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/25 13:08:52 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>

int main(void)
{
    // int arr[10];

    // arr[17] = 6;

    // std::cout << arr[17] << std::endl;

    std::array<int, 10> brr;
    //this won't compile in debug mode
    brr[17] = 7;
    std::cout << brr[17] << std::endl;

    return (0);
}