/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Encap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:56:18 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/09 00:01:30 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENCAP_HPP
# define ENCAP_HPP

#include <iostream>

class Encap
{
    private:
        int _privateInt;
    public :

        Encap(void);
        ~Encap(void);
        
        void    set(int a);
        int     get(void);
};

#endif