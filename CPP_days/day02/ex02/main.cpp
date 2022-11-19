/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:45:13 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/19 16:12:03 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    // Fixed a;
    Fixed x(5), y(5);
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    
    // std::cout << b << std::endl;
    
    // std::cout << Fixed::max( a, b ) << std::endl;

    Fixed z = x + y;
    Fixed t = x - y;

    std::cout << z.toInt() << std::endl; 
    std::cout << t.toInt() << std::endl; 
    
    
    return 0;
}