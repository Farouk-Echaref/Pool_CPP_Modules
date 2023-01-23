/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:48:45 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/23 17:56:34 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename F>
void    iter(T arr, int size, F fun)
{
    for (int i = 0; i < size; i++)
        fun(arr[i]);
}

template <typename T>
void Print(T value)
{
    std::cout << value << std::endl;
}

# endif