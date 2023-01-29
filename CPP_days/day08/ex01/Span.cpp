/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:19:58 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/29 23:45:50 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _count(0), _N(5)
{
    std::cout << "Span constructor called" << std::endl;
}

Span::Span(unsigned int n): _count(0), _N(n)
{
    std::cout << "Span constructor with string argument called called" << std::endl;
}

Span::Span(Span const & src)
{
    std::cout << "Span copy constructor called" << std::endl;
    *this = src;
}

Span::~Span()
{
    std::cout << "Span destructor called" << std::endl;
}

Span & Span::operator=(Span const & obj)
{
    (void)obj;
    std::cout << "Span assignment operator called" << std::endl;
    // this->_N = obj._N;
    // this->_count = obj._count;
    // this->_vec = obj._vec;

    return (*this);
}

void    Span::addNumber(int nb)
{
    if (this->_count < this->_N)
    {
        this->_vec.push_back(nb);
        ++this->_count;
    }
    else
        throw (std::out_of_range("Reached Max Size!"));
}

int Span::longestSpan()
{   
    if (this->_count < 2)
        throw (std::out_of_range("Not Enough Elements!"));
    std::vector<int>::iterator max = std::max_element(this->_vec.begin(), this->_vec.end());
    std::vector<int>::iterator min = std::min_element(this->_vec.begin(), this->_vec.end());
    
    return (*max - *min);
}

int Span::shortestSpan()
{
    std::vector<int>::iterator it;
    int shortSpan;
    int prev;
    
    if (this->_count < 2)
        throw (std::out_of_range("Not Enough Elements!"));
    
    it = this->_vec.begin();
    std::sort(this->_vec.begin(), this->_vec.end());
    shortSpan = std::abs(*it - *(it+1));
    
    it++;
    while (it != this->_vec.end())
    {
        if ((it + 1 != this->_vec.end()))
            prev = std::abs(*it - *(it + 1));
        if (prev < shortSpan)
            shortSpan = prev;
        it++;
    }
    return (shortSpan);
}

// void    Span::customAdd(int num)
// {
    
// }