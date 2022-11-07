/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gfg.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:38:41 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/04 20:54:00 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gfg.hpp"

NonConst::NonConst(void)
{
    std::cout << "Const Called" << std::endl;
}

NonConst::~NonConst(void)
{
    std::cout << "Deconst Called" << std::endl;
}

//Non const member function
void    NonConst::set_data(int a)
{
    x = a;
}

int NonConst::get_data(void)
{
    ++x;
    return (x);
}

// void    ConstClass::set_data2(int a)
// {
//     x = a;
// }

// int ConstClass::get_data2(void) const
// {
//     ++x;
//     return (x);
// }

