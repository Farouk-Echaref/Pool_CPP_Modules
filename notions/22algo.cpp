/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   22algo.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 03:24:44 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/26 03:33:55 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>

void    displayInt(int i)
{
    std::cout << i << std::endl;
}

int main()
{
    std::list<int>  lst;

    lst.push_back(2);
    lst.push_back(5);
    lst.push_back(6);
    lst.push_back(10);
    lst.push_back(-1);
    lst.push_back(-5);

    for_each(lst.begin(), lst.end(), displayInt);

    return (0);
}