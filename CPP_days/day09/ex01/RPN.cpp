/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 04:27:49 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/21 04:50:27 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int Rpn::checkExpr(char c)
{
    if (c == '+')
        return (this->_first + this->_second);
    else if (c == '-')
        return (this->_first - this->_second);
    else if (c == '*')
        return (this->_first * this->_second);
    //check for 0, throw except
    return (this->_first / this->_second);
}

void    Rpn::evalExpr(std::string line)
{
    std::stringstream expr(line);
    char c;

    while (expr >> c)
    {
        if (c == '+' || c == '-' || c == '/' || c == '*')
            this->_res = Rpn::checkExpr(c);p
    }
}

