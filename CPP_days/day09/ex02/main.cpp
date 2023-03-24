/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:24:47 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/24 21:46:14 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
    PmergeMe Pm;
    
    std::clock_t startVectData = std::clock();
    if (Pm.setPmVect(argv, argc) < 0)
    {
        std::cout << "Error." << std::endl;
        return (0);
    }   
    std::clock_t endVectData = std::clock();
    double vectData = ((double)(endVectData - startVectData) / (double)CLOCKS_PER_SEC) / 1000;
    
    std::clock_t startDeqData = std::clock();
    Pm.setPmDeq(argv, argc);
    std::clock_t endDeqData = std::clock();
    double deqData = ((double)(endDeqData - startDeqData) / (double)CLOCKS_PER_SEC) / 1000;
    
    std::cout << "Before: " << std::endl;
    Pm.printContainer();
    
    std::clock_t startVectSort = std::clock();
    Pm.sortVect();
    std::clock_t endVectSort = std::clock();
    double vectSort = ((double)(endVectSort - startVectSort) / (double)CLOCKS_PER_SEC) / 1000;
    
    std::clock_t startDeqSort = std::clock();
    Pm.sortDeq();
    std::clock_t endDeqSort = std::clock();
    double deqSort = ((double)( endDeqSort - startDeqSort) / (double)CLOCKS_PER_SEC) / 1000;
    Pm.setTimer(vectData + vectSort, 1);
    Pm.setTimer(deqData + deqSort, 0);

    std::cout << "After: " << std::endl;
    Pm.printContainer();
    Pm.printTime();
    return (0);
}