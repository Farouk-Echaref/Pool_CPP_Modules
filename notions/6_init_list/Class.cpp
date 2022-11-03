/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:08:21 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/03 19:23:43 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"


//init attributes in a class
// Sample::Sample()
// {
//     std::cout << "Sample Const called" << std::endl;
// }

Sample::Sample(char p1, int p2, float p3) : a1(p1) , a2(p2), a3(p3)
{
    std::cout << "Sample Const called" << std::endl;
    std::cout << "this->a1  = " << this->a1 << std::endl;
    std::cout << "this->a2  = " << this->a2 << std::endl;
    std::cout << "this->a3  = " << this->a3 << std::endl;
}

Sample::~Sample()
{
    std::cout << "Samp deconsrt called" << std::endl;
    return ;
}