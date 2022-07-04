/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_class_instance.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 03:31:20 by fech-cha          #+#    #+#             */
/*   Updated: 2022/07/04 04:30:36 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.cpp.tools.hpp"

Sample::Sample(void){
	
	std::cout << "Constructor called." << std::endl;
	return;
}

Sample::~Sample(void){
	
	std::cout << "Deconstructor called." << std::endl;
	return;
}

//create an instance of a class

int main(void)
{
	Sample instance;

	return (0);
}