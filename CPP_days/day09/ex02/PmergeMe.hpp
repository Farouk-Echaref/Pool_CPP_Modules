/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:40:16 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/24 02:44:43 by fech-cha         ###   ########.fr       */
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

class PmergeMe
{
    private:
        std::vector<int> _vec;
        std::deque<int>  _deq;
    public:
        PmergeMe();
        PmergeMe(PmergeMe const & src);
        ~PmergeMe();
        PmergeMe & operator=(PmergeMe const & obj);

        void    setPm(int numb);
        void    printContainer(void);
        void    sortContainer(void);
};

void    ft_swap(int *a, int *b);
void    merge_insert(std::deque<int>& deq, int left, int right);
void    merge(std::deque<int> &deq, int left, int mid, int right);
void    insertSort(std::deque<int> &deq, int left, int right);
void    merge_insert(std::vector<int>& vec, int left, int right);
void    merge(std::vector<int> &vec, int left, int mid, int right);
void    insertSort(std::vector<int> &vec, int left, int right);


#endif
