/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:17:51 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/30 22:43:17 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>

typedef std::vector<int>::iterator iterator;

class Span
{
    private:
        unsigned int    _count;
        unsigned int    _N;
        std::vector<int>  _vec;
        
    public:
        Span();
        Span(unsigned int n);
        Span(Span const & src);
        ~Span();

        Span & operator=(Span const & obj);
        
        void    addNumber(int nb);
        int     shortestSpan();
        int     longestSpan();
        void    customAdd(iterator start, iterator ending);
        
};

#endif