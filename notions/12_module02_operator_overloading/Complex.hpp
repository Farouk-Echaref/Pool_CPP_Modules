/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Complex.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:20:33 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/15 23:35:16 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLEX_HPP
# define COMPLEX_HPP

#include <iostream>

class Complex
{
    private:
        int _real;
        int _imag;
    public:
        Complex();
        Complex(int real, int imag);
        ~Complex();
        Complex operator + (Complex const &obj) const;
        void    print(void) const; 
};

#endif