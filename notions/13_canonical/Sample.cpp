/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 03:25:41 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/16 03:43:03 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample(void) : _foo(0)
{
    std::cout << "Default constructor called." << std::endl;
}

Sample::Sample(const int n): _foo(n)
{
    std::cout << "Parametric constructor called." << std::endl;
}

Sample::Sample(const Sample & src)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
}

Sample::~Sample(void)
{
    std::cout << "Destructor called." << std::endl;
}

int Sample::getFoo(void) const
{
    return (this->_foo);
}

Sample & Sample::operator=(Sample const &rhs)
{
    std::cout << "Assignment operator called." << std::endl;
    if (this != &rhs)
        this->_foo = rhs.getFoo();
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Sample const & rhs)
{
    o << "The value of _foo is " << rhs.getFoo();
    return (o);
}