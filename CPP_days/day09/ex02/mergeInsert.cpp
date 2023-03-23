/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeInsert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 06:35:42 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/23 08:24:12 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    ft_swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void    insertSort(std::vector<int> &vec, int left, int right)
{
    int i,j;
    for (i = left; i < right; i++)
    {
        j = i + 1;
        while (j > 0)
        {
            if (vec[j - 1] > vec[j])
                ft_swap(&vec[j - 1], &vec[j]);
            j--;
        }
    }
}

void    merge(std::vector<int> &vec, int left, int mid, int right)
{
    std::vector<int> tmp(right - left + 1);
        int i = left, j = mid + 1, k = 0;
        while (i <= mid && j <= right) {
            if (vec[i] <= vec[j]) {
                tmp[k++] = vec[i++];
            } else {
                tmp[k++] = vec[j++];
            }
        }
        while (i <= mid) {
            tmp[k++] = vec[i++];
        }
        while (j <= right) {
            tmp[k++] = vec[j++];
        }
        std::copy(tmp.begin(), tmp.end(), vec.begin() + left);
}

void    merge_insert(std::vector<int>& vec, int left, int right) {
    if (left >= right) {
        return;
    }

    const int insert_sort_threshold = std::max(10, static_cast<int>(std::sqrt(vec.size())));;
    if (right - left + 1 <= insert_sort_threshold) {
        // sort subvecay using insertion sort
        insertSort(vec, left, right);
    }
    else {
        int mid = (left + right) / 2;
        merge_insert(vec, left, mid);
        merge_insert(vec, mid + 1, right);

        // merge sorted subvecays
        merge(vec, left, mid, right);
    }
}
