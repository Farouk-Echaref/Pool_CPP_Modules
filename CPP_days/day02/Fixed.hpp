/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:19:28 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/16 16:00:01 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 _fp;
        static const int    _fract = 8;
    public:
        Fixed();
        Fixed(Fixed const & src);
        ~Fixed();

        Fixed & operator=(Fixed const & obj);
        int getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif 