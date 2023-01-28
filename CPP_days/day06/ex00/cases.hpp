/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:48:53 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/28 19:56:51 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASES_HPP
# define CASES_HPP

#include <iomanip> 
#include <iostream>
#include <sstream> 

int     isInt(char *str);
void    castInt(char *str);
int     isFloat(char *str);
void    castFloat(std::string str);
int     isDouble(char *str);
void    castDouble(std::string str);
int     isNotNum(char *str);
void    castChar(char c);
void    errorInput(void);
void    specialCases(std::string str, int *check);

#endif