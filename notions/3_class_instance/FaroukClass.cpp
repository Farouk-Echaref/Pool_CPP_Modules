/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FaroukClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:13:42 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/02 20:19:48 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FaroukClass.hpp"

Farouk::Farouk()
{
    std::cout << "Farouk Constructor has been called" << std::endl;
}

Farouk::~Farouk()
{
    std::cout << "Farouk Deconstructor has been called" << std::endl;
}

int main()
{
    // code in constructor will also run (to initialise data for instance)
    Farouk frClass;

    return (0);
    // destructor is called when the instance goes out of scope
}