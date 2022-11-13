/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 04:12:04 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/13 04:17:56 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::string cmd;

    while (1)
    {
        std::cout << " \t\t------ Harl 2.0: ------" << std::endl;
        std::cout << "Enter Harl Command : " << std::endl;

        if (!std::getline(std::cin, cmd))
            exit(1);
        harl.complain(cmd);
    }
}