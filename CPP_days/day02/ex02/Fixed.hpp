/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:19:28 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/17 16:43:00 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define TRUE 1
# define FALSE 0

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _fp;
        static const int    _fract = 8;
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float ft);
        Fixed(Fixed const & src);
        ~Fixed();

        Fixed & operator=(Fixed const & obj);
        Fixed   operator+(Fixed const & obj) const;
        Fixed   operator-(Fixed const & obj) const;
        Fixed   operator*(Fixed const & obj) const;
        Fixed   operator/(Fixed const & obj) const;
        
        int     operator>(Fixed const & obj) const;
        int     operator<(Fixed const & obj) const;
        int     operator>=(Fixed const & obj) const;
        int     operator<=(Fixed const & obj) const;
        int     operator==(Fixed const & obj) const;
        int     operator!=(Fixed const & obj) const;
        
        //prefix
        Fixed & operator++(void);
        Fixed & operator--(void);
        //postfix
        Fixed operator++(int);
        Fixed operator--(int);

        //Min/Max
        static Fixed & min(Fixed & obj1, Fixed & obj2);
        static Fixed const & min(Fixed const & obj1, Fixed const & obj2);
        static Fixed & max(Fixed & obj1, Fixed & obj2);
        static Fixed const & max(Fixed const & obj1, Fixed const & obj2);
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & obj);

#endif 
