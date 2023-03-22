/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:16:09 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/21 23:23:38 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream> 
#include <iomanip> 
#include <utility>
#include <ctype.h>
#include <exception> 
#include <vector>
#include <deque>

using namespace std;

void merge(vector<int>& arr, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    vector<int> L(n1);
    vector<int> R(n2);

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r)
{
    if (l < r) {
        // Find the middle point
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
    }
}

int main()
{
    std::vector<int> vec;

    vec.push_back(420);
    vec.push_back(69);
    vec.push_back(-666);
    vec.push_back(12);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(9);
    vec.push_back(89);
    vec.push_back(2);
    vec.push_back(100);

    std::vector<int>::iterator it = vec.begin();
    std::cout << "Before MergeSort: " << std::endl;
    for(; it != vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    int n = vec.size();
    mergeSort(vec, 0, n-1);
    std::cout << "After MergeSort: " << std::endl;
    std::vector<int>::iterator it2 = vec.begin();
    for(; it2 != vec.end(); it2++)
        std::cout << *it2 << " ";
    return (0);
}