/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeInsertDeq.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 06:35:42 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/24 02:44:01 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    ft_swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void    insertSort(std::deque<int> &deq, int left, int right)
{
    int i,j;
    for (i = left; i < right - 1; i++)
    {
        j = i + 1;
        while (j > 0)
        {
            if (deq[j - 1] > deq[j])
                ft_swap(&deq[j - 1], &deq[j]);
            j--;
        }
    }
}

void    merge(std::deque<int> &deq, int left, int mid, int right)
{
    std::deque<int> tmp(right - left + 1);
        int i = left, j = mid + 1, k = 0;
        while (i <= mid && j <= right) {
            if (deq[i] <= deq[j]) {
                tmp[k++] = deq[i++];
            } else {
                tmp[k++] = deq[j++];
            }
        }
        while (i <= mid) {
            tmp[k++] = deq[i++];
        }
        while (j <= right) {
            tmp[k++] = deq[j++];
        }
        std::copy(tmp.begin(), tmp.end(), deq.begin() + left);
}

void    merge_insert(std::deque<int>& deq, int left, int right) {
    if (left >= right) {
        return;
    }

    const int insert_sort_threshold = std::max(10, static_cast<int>(std::sqrt(deq.size())));;
    if (right - left + 1 <= insert_sort_threshold) {
        // sort subdeqay using insertion sort
        insertSort(deq, left, right);
    }
    else {
        int mid = (left + right) / 2;
        merge_insert(deq, left, mid);
        merge_insert(deq, mid + 1, right);

        // merge sorted subdeqays
        merge(deq, left, mid, right);
    }
}
