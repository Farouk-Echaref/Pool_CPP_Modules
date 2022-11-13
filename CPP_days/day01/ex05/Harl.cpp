/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:45:56 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/13 04:26:20 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "DEBUG MODE" << std::endl;
    return ;
}

void    Harl::info(void)
{
    std::cout << "INFO MODE" << std::endl;
    return ;
}

void    Harl::warning(void)
{
    std::cout << "WARNING MODE" << std::endl;
    return ;
}

void    Harl::error(void)
{
    std::cout << "ERROR MODE" << std::endl;
    return ;
}

Harl::Harl(void)
{}

Harl::~Harl(void)
{}

void    Harl::callMemberPtr(void(Harl::*fp)(void))
{
    (this->*fp)();
}

void    Harl::complain(std::string level)
{
    int i = 0;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    Harlptr ptr[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    while (i < 4)
    {
        if (level == levels[i])
        {
            this->callMemberPtr(ptr[i]);
            break;
        }
        i++;
    }
    return ;
}