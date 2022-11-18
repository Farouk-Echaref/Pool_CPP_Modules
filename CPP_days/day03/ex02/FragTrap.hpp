/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:26:27 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/18 05:34:23 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string name);
        FragTrap(FragTrap const & src);
        FragTrap & operator=(FragTrap const & obj);
        ~FragTrap();
        void    attack(const std::string &target);
        void    highFiveGuys(void) const;
};

#endif