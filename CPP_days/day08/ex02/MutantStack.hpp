/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:55:55 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/30 22:51:50 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>
#include <iterator>
#include <list>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> 
{
    public:
        MutantStack();
        MutantStack(MutantStack & obj)
        {
            *this = obj;
        }
        MutantStack	&operator=(const MutantStack &obj)
		{
			this->c = obj.c;
			return (*this);
		}
        ~MutantStack();
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;


        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }

        const_iterator begin() const { return this->c.begin(); }
        const_iterator end() const { return this->c.end(); }
};

#endif