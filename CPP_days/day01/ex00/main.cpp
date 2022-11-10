/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 06:40:19 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/10 20:51:24 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    randomChump("Zombie2");
    Zombie *zombie = newZombie("Zombie1");
    zombie->announce();

    delete zombie;

    return (0);
}