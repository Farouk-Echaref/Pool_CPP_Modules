/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 03:01:12 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/16 03:05:04 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

int main(void)
{
    Integer x(30);
    Integer y(10);
    Integer z(0);

    std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;

    y = Integer(12);
    std::cout << "Value of y : " << y << std::endl;

	std::cout << "Value of z : " << z << std::endl;
    z = x + y;
    
    std::cout << "Value of z : " << z << std::endl;

    return (0);
}