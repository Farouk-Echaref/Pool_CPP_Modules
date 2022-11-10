/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:17:59 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/10 15:38:41 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string cmd;
    PhoneBook   phone;
    
    while (1)
    {    
        std::cout << "Enter Command : " << std::endl;
        if (!std::getline(std::cin, cmd))
            exit(1);
        if (cmd.compare("ADD") == 0)
            phone.Add();
        else if (cmd.compare("SEARCH") == 0)
            phone.Search();
        else if (cmd.compare("EXIT") == 0)
            phone.Exit();
        else
            std::cout << "Invalid Command." << std::endl;
    }

    return (0);
}