/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:36:58 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/02 23:18:48 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Members.hpp"

int main(void)
{
    double  Vol1 = 1;
    double  Vol2 = 1;
    Box firstBox;
    Box secondBox;

    firstBox.setBreadth(1.5);
    firstBox.setHeight(2.25);
    firstBox.setLength(3);

    Vol1 = firstBox.getVolume();

    secondBox.setBreadth(1.5);
    secondBox.setHeight(2);
    secondBox.setLength(3);

    Vol2 = secondBox.getVolume();

    std::cout << "Volume of firstBox: " << Vol1 << std::endl;
    std::cout << "Volume of secondBox: " << Vol2 << std::endl;
    
    return (0);
}