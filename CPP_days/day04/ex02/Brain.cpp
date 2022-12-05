/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 05:18:38 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 05:11:31 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(): _index(0)
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & obj)
{
    std::cout << "Brain assignment operator called" << std::endl;
    this->_index = obj._index;
    for (int i = 0; i < obj._index; i++)
        this->_ideas[i] = obj._ideas[i];
    return (*this);
}

void    Brain::setIdea(const std::string & idea)
{
    this->_ideas[this->_index] = idea;
    if (this->_index < 100)
        this->_index++;
}

std::string Brain::getIdea(int pos) const
{
    if (pos < this->_index)
        return (this->_ideas[pos]);
    return (NULL);
}