/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:48:44 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/16 16:44:40 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // try
    // {
    //     Bureaucrat obj("farouk", 150);
    //     std::cout << obj;
    //     obj.increment();
    //     obj.decrement();
    //     obj.decrement();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    Bureaucrat obj("farouk", 150);
    
    Bureaucrat test(obj);

    std::cout << test.getName() << std::endl ; 
    return(0);
}