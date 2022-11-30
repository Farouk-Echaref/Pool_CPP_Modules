/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:32:06 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/29 16:37:30 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hitPt;
        int         _energyPt;
        int         _attackDmg;
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();

        ClapTrap & operator=(ClapTrap const & obj);

        virtual void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

       int    getHitPoints(void) const;
       int    getEnergyPoits(void) const;
};

#endif