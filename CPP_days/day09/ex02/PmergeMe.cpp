/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:23:25 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/24 07:26:27 by fech-cha         ###   ########.fr       */
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

int stringToInt(const std::string& str) {
    std::stringstream ss(str);
    int num;
    ss >> num;
    return num;
}

bool isPositiveInteger(const std::string& str) {
    if (str.empty())
        return false;

    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it)) 
            return false;
    }
    return true;
}

int PmergeMe::setPmVect(char **argv, int argc)
{
    for (int i = 1; i < argc; i++)
    {
        std::string n = argv[i];
        if (isPositiveInteger(n) == false)
            return (-1);
        this->_vec.push_back(stringToInt(n));
    }
    return (1);
}

int PmergeMe::setPmDeq(char **argv, int argc)
{
    for (int i = 1; i < argc; i++)
    {
        std::string n = argv[i];
        if (isPositiveInteger(n) == false)
            return (-1);
        this->_deq.push_back(stringToInt(n));
    }
    return (1);
}

void    PmergeMe::setTimer(double time, int choice)
{
    if (choice == 1)
        this->_vecProcessTime = time;
    else
        this->_deqProcessTime = time;
}

void    PmergeMe::printContainer(void)
{
    std::cout << "Using std::vector: " << std::endl;
    std::vector<int>::iterator itVec = this->_vec.begin();
    for(; itVec != this->_vec.end(); itVec++)
        std::cout << *itVec << " ";
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Using std::deque: " << std::endl;
    std::deque<int>::iterator itDeq = this->_deq.begin();
    for(; itDeq != this->_deq.end(); itDeq++)
        std::cout << *itDeq << " ";
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
}

void    PmergeMe::printTime(void)
{
    std::cout << "Time to process a range of " << this->_vec.size() << "elements with std::vector<int> : " << this->_vecProcessTime << std::endl;
    std::cout << "Time to process a range of " << this->_deq.size() << "elements with std::deque<int> : " << this->_deqProcessTime << std::endl;
}

void    PmergeMe::sortVect(void)
{
    merge_insertion_sort_vec(this->_vec);
}

void    PmergeMe::sortDeq(void)
{
    merge_insertion_sort_deq(this->_deq);
}
