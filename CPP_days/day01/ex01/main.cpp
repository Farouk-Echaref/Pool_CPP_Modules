/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:56:11 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/11 18:28:16 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;

    zombie = zombieHorde(5, "fech-cha");
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    
    delete [] zombie;
}