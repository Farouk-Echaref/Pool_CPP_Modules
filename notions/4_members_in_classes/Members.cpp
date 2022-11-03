/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Members.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:27:57 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/03 16:59:41 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Members.hpp"

Box::Box(void)
{
    std::cout << "Box Constructor called" << std::endl;
}

Box::~Box(void)
{
    std::cout << "Box Deconstructor Called" << std::endl;
}

double  Box::getVolume(void)
{
    return (this->length * this->breadth * this->height);
}

void    Box::setBreadth(double breadth)
{
    this->breadth = breadth;
}

void    Box::setHeight(double height)
{
    this->height = height;
}

void    Box::setLength(double length)
{
    this->length = length;
}