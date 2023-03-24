/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeInsertVect.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 06:35:42 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/24 07:06:07 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// void    insertSort(std::vector<int> &vec, int right)
// {
//     int i, j, key;
//     for (i = 1; i < right - 1; i++)
//     {
//         key = vec[i];
//         j = i - 1;
//         while (j > 0 && vec[j] > key)
//         {
//             vec[j + 1] = vec[j];
//             j--;
//         }
//         vec[j + 1] = key;
//     }
// }

// void    merge(std::vector<int> &vec, int left, int mid, int right)
// {
//     std::vector<int> tmp(right - left + 1);
//         int i = left, j = mid + 1, k = 0;
//         while (i <= mid && j <= right) {
//             if (vec[i] <= vec[j]) {
//                 tmp[k++] = vec[i++];
//             } else {
//                 tmp[k++] = vec[j++];
//             }
//         }
//         while (i <= mid) {
//             tmp[k++] = vec[i++];
//         }
//         while (j <= right) {
//             tmp[k++] = vec[j++];
//         }
//         std::copy(tmp.begin(), tmp.end(), vec.begin() + left);
// }

// void    merge_insert(std::vector<int>& vec, int left, int right) {
//     if (left >= right) {
//         return;
//     }

//     const int insert_sort_threshold = std::max(10, static_cast<int>(std::sqrt(vec.size())));;
//     if (right - left + 1 <= insert_sort_threshold) {
//         // sort subvecay using insertion sort
//         insertSort(vec, right);
//     }
//     else {
//         int mid = (left + right) / 2;
//         merge_insert(vec, left, mid);
//         merge_insert(vec, mid + 1, right);

//         // merge sorted subvecays
//         merge(vec, left, mid, right);
//     }
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

// Merge two sorted subarrays
void merge(std::vector<int>& data, int left, int mid, int right) {
    std::vector<int> left_arr(data.begin() + left, data.begin() + mid + 1);
    std::vector<int> right_arr(data.begin() + mid + 1, data.begin() + right + 1);

    unsigned long i = 0, j = 0, k = left;
    while (i < left_arr.size() && j < right_arr.size()) {
        if (left_arr[i] <= right_arr[j]) {
            data[k++] = left_arr[i++];
        } else {
            data[k++] = right_arr[j++];
        }
    }

    while (i < left_arr.size()) {
        data[k++] = left_arr[i++];
    }

    while (j < right_arr.size()) {
        data[k++] = right_arr[j++];
    }
}

// Insertion sort for small subarrays
void insertion_sort(std::vector<int>& data, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = data[i];
        int j = i - 1;

        while (j >= left && data[j] > key) {
            data[j + 1] = data[j];
            --j;
        }

        data[j + 1] = key;
    }
}

// Merge-insert sort
void merge_insert_sort(std::vector<int>& data, int left, int right, int insert_sort_threshold) {
    if (right - left + 1 <= insert_sort_threshold) {
        insertion_sort(data, left, right);
    } else {
        int mid = left + (right - left) / 2;
        merge_insert_sort(data, left, mid, insert_sort_threshold);
        merge_insert_sort(data, mid + 1, right, insert_sort_threshold);
        merge(data, left, mid, right);
    }
}

// Sort function for std::vector<int>
void merge_insertion_sort(std::vector<int>& data) {
    const int n = data.size();
    const int insert_sort_threshold = std::max(1, static_cast<int>(std::sqrt(n)));

    merge_insert_sort(data, 0, n - 1, insert_sort_threshold);
}
