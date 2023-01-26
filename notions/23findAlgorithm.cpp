/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   23findAlgorithm.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:41:50 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/26 20:56:46 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
    std::vector<int> vec;

    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(6);
    vec.push_back(1);
    vec.push_back(-9);
    vec.push_back(10);

    std::vector<int>::iterator it;

    it = std::find(vec.begin(), vec.end(), 69);
    
    try
    {
        if (it != vec.end())
            std::cout << *it << std::endl;
        else
            throw std::out_of_range("Error! The element is not found");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}