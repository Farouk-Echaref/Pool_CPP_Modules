/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:24:47 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/24 02:47:39 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int stringToInt(const std::string& str) {
    std::stringstream ss(str);
    int num;
    ss >> num;
    return num;
}

bool isPositiveInteger(const std::string& str) {
    if (str.empty()) { // empty string is not a valid integer
        return false;
    }

    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it)) { // if a non-digit character is encountered, the string is not a valid integer
            return false;
        }
    }

    return true;
}

int main(int argc, char **argv)
{
    PmergeMe Pm;
    
    for (int i = 1; i < argc; i++)
    {
        std::string n = argv[i];
        if (isPositiveInteger(n) == false)
        {
            std::cout << "Error." << std::endl;
            return (-1);
        }
        Pm.setPm(stringToInt(n));
    }
    std::cout << "Before: " << std::endl;
    Pm.printContainer();
    Pm.sortContainer();
    std::cout << "After: " << std::endl;
    Pm.printContainer();
    return (0);
}