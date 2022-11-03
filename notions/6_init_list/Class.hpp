/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:08:24 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/03 19:23:38 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

#include <iostream>

class Sample
{
    public:
        //attributes
        char a1;
        int a2;
        float a3;
        
        //Sample();
        Sample(char p1, int p2, float p3);
        ~Sample();
};

#endif