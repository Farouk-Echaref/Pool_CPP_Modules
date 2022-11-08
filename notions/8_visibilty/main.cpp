/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:30:49 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/08 23:41:18 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

int main (void)
{
    Sample inst;
    // inst.publicBar();
    // std::cout << "Main inst.publicFoo: " << inst.publicFoo << std::endl;

    //compilation error
    // std::cout << "Main inst._privateFoo: " << inst._privateFoo << std::endl;
    // inst._privateBar();
}