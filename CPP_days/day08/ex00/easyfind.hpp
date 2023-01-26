/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 04:13:39 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/26 21:02:35 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <array>
#include <list>
#include <vector>


//forbidden

// template<typename T>
// typename T::const_iterator easyfind(T const & tmp, int a)
// {
//     for(typename T::const_iterator it = tmp.begin(); it != tmp.end(); ++it)
//     {
//         if (*it == a)
//             return (it);
//     }
//     throw std::out_of_range("Error! the element is not found");
// }


template <typename T>
typename T::const_iterator easyfind(T const &tmp, int a)
{
    typename T::const_iterator it;
    
    it = std::find(tmp.begin(), tmp.end(), a);
    
    if (it != tmp.begin())
        return (it);
    throw std::out_of_range("Error! The element is not found");
}

#endif