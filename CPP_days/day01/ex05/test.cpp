/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:57:34 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/13 02:36:09 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AB
{
    public:
        int sub(int a, int b)
        {
            return (a - b);
        }
        int div(int a, int b)
        {
            return (a / b);
        }
};


int res1(int m, int n, AB *obj, int(AB::*fp)(int, int))
{
    return (obj->*fp)(m, n);
}

int res2(int m, int n, AB *obj, int(AB::*fp)(int, int))
{
    return (obj->*fp)(m, n);
}

int main (void)
{
    AB obj;

    std::cout << "Sub: " << res1(10, 5, &obj, &AB::sub) << std::endl;
    std::cout << "Div: " << res2(10, 5, &obj, &AB::div) << std::endl;

    return (0);
}
