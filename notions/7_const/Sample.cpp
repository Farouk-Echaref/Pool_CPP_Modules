/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:28:07 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/08 20:56:02 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample(float const f) : pi(f), qd(69)
{
    std::cout << "Const called with init list ." << std::endl;
}

Sample::~Sample(void)
{
    std::cout << "Deconst called ." << std::endl;
}

void    Sample::bar(void) const
{
    std::cout << "Calling Bar member function :" << std::endl; 
    std::cout << "this->pi = " << this->pi << std::endl;
    std::cout << "this->qd = " << this->qd << std::endl;
    
    return ;
}