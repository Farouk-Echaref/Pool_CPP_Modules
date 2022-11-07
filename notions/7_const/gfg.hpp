/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gfg.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:38:27 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/04 20:57:33 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GFG_HPP
# define GFG_HPP

#include <iostream>

//non const member function
class NonConst
{
    public :
        NonConst();
        ~NonConst(); 
        int x;
        void    set_data(int a);
        int     get_data(void);
};


// const member function
// class ConstClass
// {
//     ConstClass();
//     ~ConstClass();
//     public:
//         int x;
//         void    set_data2(int a);
//         int     get_data2(void) const;
// };

# endif