/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Members.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:31:43 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/02 23:42:10 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMBERS_CPP_HPP
# define MEMBERS_CPP_HPP

#include <iostream>

class Box
{
    public:

        //const / deconst
        Box(void);
        ~Box(void);
        //member attributes
        double length;
        double breadth;
        double height;

        //member functions
        double getVolume(void); // getters: return a value
        //setters: set value for a class
        void    setLength(double);
        void    setBreadth(double);
        void    setHeight(double);
};

#endif