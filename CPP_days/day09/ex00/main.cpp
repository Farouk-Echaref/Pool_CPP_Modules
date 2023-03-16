/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:48:07 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/16 23:27:20 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::ifstream test(argv[1]);
        if (!test.good())
        {
            std::cout << "File Error : [¬º-°]¬ " << std::endl;
            return (-1);
        }
        test.close();
        Btc btc;
        std::string src(argv[1]);
        
        btc.readData(src);
        btc.execMap();
    }
    else    
        std::cout << "Not enough arguments." << std::endl;
    return (0);
}