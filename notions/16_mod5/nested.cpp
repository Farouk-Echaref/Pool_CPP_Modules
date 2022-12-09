/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nested.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:18:49 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/08 22:52:38 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// class Enclosed
// {
//     int x;
//     class Nested
//     {
//         void    meth(Enclosed *e)
//         {
//             std::cout << e->x << std::endl;
//         }
//     };
// };

class Enclosed
{
    class Nested
    {
        int y;
    };
    void meth(Nested *n)
    {
        std::cout << n->y << std::endl;
    }
};

int main()
{}