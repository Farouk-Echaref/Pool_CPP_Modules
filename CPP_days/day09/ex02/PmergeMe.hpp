/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:40:16 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/24 21:35:19 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <iomanip>

class PmergeMe
{
    private:
        std::vector<int>    _vec;
        std::deque<int>     _deq;
        double              _vecProcessTime;
        double              _deqProcessTime;
    public:
        PmergeMe();
        PmergeMe(PmergeMe const & src);
        ~PmergeMe();
        PmergeMe & operator=(PmergeMe const & obj);

        int     setPmVect(char **argv, int argc);
        int     setPmDeq(char **argv, int argc);
        void    printContainer(void);
        void    sortVect(void);
        void    sortDeq(void);
        void    setTimer(double time, int choice);
        void    printTime(void);
};

void merge_insertion_sort_deq(std::deque<int>& data);
void merge_insertion_sort_vec(std::vector<int>& data);

#endif
