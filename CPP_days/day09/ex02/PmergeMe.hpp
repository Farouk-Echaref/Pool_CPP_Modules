/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:40:16 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/24 07:05:34 by fech-cha         ###   ########.fr       */
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

void    ft_swap(int *a, int *b);
// void    merge_insert(std::deque<int>& deq, int left, int right);
// void    merge_insert(std::vector<int>& vec, int left, int right);
// void    merge(std::deque<int> &deq, int left, int mid, int right);
void    merge(std::vector<int> &vec, int left, int mid, int right);
// void    insertSort(std::deque<int> &deq, int left, int right);
// void    insertSort(std::vector<int> &vec, int left, int right);
void merge_insert_sort(std::vector<int>& data, int left, int right, int insert_sort_threshold);
void insertion_sort(std::vector<int>& data, int left, int right);

void merge_insertion_sort(std::vector<int>& data);
#endif
