/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 03:44:18 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/16 03:47:14 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

int main(void)
{
    Sample inst1;
    Sample inst2(1337);
    Sample inst3(inst1);

    std::cout << inst1 << std::endl;
    std::cout << inst2 << std::endl;
    std::cout << inst3 << std::endl;

    inst3 = inst2;
    std::cout << inst3 << std::endl;
    
    return (0);
}