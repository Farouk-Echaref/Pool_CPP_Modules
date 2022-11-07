/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_stdio_streams.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 03:12:55 by fech-cha          #+#    #+#             */
/*   Updated: 2022/09/30 21:40:43 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	char buff[420];
	
	std::cout << "42 Network" << std::endl;
	
	std::cout << "Input string : \n";
	std::cin >> buff; 
	std::cout << "String you entered : [" << buff << "]" << std::endl;

	return (0);
}