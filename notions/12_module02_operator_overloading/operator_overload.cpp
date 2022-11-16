/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_overload.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:57:38 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/15 23:42:16 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Complex.hpp"

int main(void)
{
	Complex c1(1,2), c2(2,1);
	
	Complex c3 = c1 + c2;

	c3.print();

	return (0);
}