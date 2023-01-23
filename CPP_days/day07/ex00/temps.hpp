/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temps.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:17:24 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/23 16:27:06 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPS_HPP
# define TEMPS_HPP

#include <iostream>

template<typename T>
void swap(T & val1, T & val2)
{
    T tmp = val1;
    val1 = val2;
    val2 = tmp;
}

template<typename T>
T max(T const & a, T const & b)
{
    return (a > b) ? a : b;
}

template<typename T>
T min(T const & a, T const & b)
{
    return (a < b) ? a : b;
}

#endif