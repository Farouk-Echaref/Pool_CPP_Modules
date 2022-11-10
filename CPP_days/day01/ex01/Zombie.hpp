/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 06:22:35 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/10 21:30:21 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name): _name("Zombie")
        {}
        ~Zombie(void)
        {
            std::cout << this->_name << " is dead for good. " << std::endl;
        }
        void    announce(void);  
};

Zombie* zombieHorde( int N, std::string name );

#endif