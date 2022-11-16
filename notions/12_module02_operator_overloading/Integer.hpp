/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:56:21 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/16 03:15:53 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
# define INTEGER_HPP

#include <iostream>

class Integer
{
    private:
        int _n;
    public:
        Integer(int const n);
        ~Integer();

        int getValue() const;

        Integer & operator = (Integer const & rhs);
        Integer operator + (Integer const & rhs) const;
};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);

#endif