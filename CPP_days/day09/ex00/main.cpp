/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:48:07 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/15 04:40:57 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    Btc btc;
    std::string src(argv[1]);
    
    if (argc == 2)
    {
        btc.readData(src);
    }
    else    
        std::cout << "Not enough arguments." << std::endl;
    return (0);
}