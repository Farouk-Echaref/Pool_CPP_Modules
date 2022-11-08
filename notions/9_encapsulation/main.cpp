/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:02:33 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/09 00:10:56 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Encap.hpp"

int main(void)
{
    Encap inst;
    
    inst.set(420);
    
    //can't do this cs it's private
    // inst._privateInt = 69;
    
    std::cout << "this->_privateInt: " << inst.get() << std::endl;
    return (0);
}