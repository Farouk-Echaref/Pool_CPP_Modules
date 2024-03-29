/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:36:24 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/14 22:37:30 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample() {
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
}

void Sample::bar(const char c) const {
	std::cout << "Member function bar called with char overload : " << c << std::endl;
}

void Sample::bar(const int n) const {
	std::cout << "Member function bar called with int overload : " << n << std::endl;
}

void Sample::bar(const float z) const {
	std::cout << "Member function bar called with float overload : " << z << std::endl;
}

void Sample::bar(const Sample & i) const {
	(void) i;
	std::cout << "Member function bar called with Sample class overload" << std::endl;
}