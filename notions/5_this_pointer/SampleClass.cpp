/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SampleClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:41:27 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/03 17:06:15 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SampleClass.hpp"

Sample::Sample(void)
{
    std::cout << "Sample Const Called" << std::endl;

    // Sample::foo = 1337;
    this->foo = 1337;
    
    std::cout << "This->foo = " << this->foo << std::endl;

    // Sample::bar();
    this->bar();    
    return ;
}

Sample::~Sample(void)
{
    std::cout << "Sample Deconst called" << std::endl;
    return ;
}

void    Sample::bar(void)
{
    std::cout << "Member bar called" << std::endl;
    return ;
}