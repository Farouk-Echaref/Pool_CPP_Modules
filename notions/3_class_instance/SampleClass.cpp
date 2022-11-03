/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SampleClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 00:32:40 by fech-cha          #+#    #+#             */
/*   Updated: 2022/10/31 00:39:23 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SampleClass.hpp"

Test::Test(void)
{
    std::cout << "Test Constructor has been called" << std::endl ;
    return ;
}

Test::~Test(void)
{
    std::cout << "Test deconstructor has been called" << std::endl;
    return ;   
}

int main(void)
{
    Test testInstance;
    return (0);
}

//c++ -std=c++98 -Wall -Wextra -Werror SampleClass.hpp SampleClass.cpp