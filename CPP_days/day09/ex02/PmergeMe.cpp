/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:23:25 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/24 02:45:33 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    std::cout << "PmergeMe constructor called" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
    std::cout << "PmergeMe copy constructor called" << std::endl;
    *this = src;
}

PmergeMe::~PmergeMe()
{
    std::cout << "PmergeMe destructor called" << std::endl;
}

PmergeMe & PmergeMe::operator=(PmergeMe const & obj)
{
    (void)obj;
    std::cout << "PmergeMe assignment operator called" << std::endl;
    return (*this);
}

void    PmergeMe::setPm(int num)
{
    this->_deq.push_back(num);
    this->_vec.push_back(num);
}

void    PmergeMe::printContainer(void)
{
    std::cout << "std::vector: " << std::endl;
    std::vector<int>::iterator itVec = this->_vec.begin();
    for(; itVec != this->_vec.end(); itVec++)
        std::cout << *itVec << " ";
    std::cout << "" << std::endl;
    std::cout << "std::deque: " << std::endl;
    std::deque<int>::iterator itDeq = this->_deq.begin();
    for(; itDeq != this->_deq.end(); itDeq++)
        std::cout << *itDeq << " ";
    std::cout << "" << std::endl;
}

void    PmergeMe::sortContainer(void)
{
    merge_insert(this->_deq, 0, this->_deq.size());
    merge_insert(this->_vec, 0, this->_vec.size());
}