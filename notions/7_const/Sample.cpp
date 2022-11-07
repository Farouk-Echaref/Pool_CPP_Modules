/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:28:07 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/03 20:37:39 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample(float const f) : pi(f), qd(69)
{
    std::cout << "Cosnt called and init()." << std::endl;
    return ;
}

Sample::~Sample(void)
{
    std::cout << "Deconst called and deleted vars." << std::endl;
    return ;
}

