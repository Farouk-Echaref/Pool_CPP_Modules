/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 06:22:35 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/10 20:38:34 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name)
        {
            this->name = name;
        }
        ~Zombie(void)
        {
            std::cout << this->name << " is dead for good. " << std::endl;
        }
        void    announce(void);  
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif