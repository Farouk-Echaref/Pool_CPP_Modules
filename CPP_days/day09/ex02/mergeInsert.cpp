/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeInsert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 06:35:42 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/23 07:10:36 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void merge_insert(std::vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }

    const int insert_sort_threshold = std::max(10, static_cast<int>(std::sqrt(arr.size())));;
    if (right - left + 1 <= insert_sort_threshold) {
        // sort subarray using insertion sort
        for (int i = left + 1; i <= right; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= left && arr[j] > key) {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = key;
        }
    } else {
        int mid = (left + right) / 2;
        merge_insert(arr, left, mid);
        merge_insert(arr, mid + 1, right);

        // merge sorted subarrays
        std::vector<int> tmp(right - left + 1);
        int i = left, j = mid + 1, k = 0;
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                tmp[k++] = arr[i++];
            } else {
                tmp[k++] = arr[j++];
            }
        }
        while (i <= mid) {
            tmp[k++] = arr[i++];
        }
        while (j <= right) {
            tmp[k++] = arr[j++];
        }
        std::copy(tmp.begin(), tmp.end(), arr.begin() + left);
    }
}
