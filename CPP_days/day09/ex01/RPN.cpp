/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 04:27:49 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/21 19:35:20 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


Rpn::Rpn()
{
    std::cout << "Rpn constructor called" << std::endl;
}

Rpn::Rpn(Rpn const & src)
{
    std::cout << "Rpn copy constructor called" << std::endl;
    *this = src;
}

Rpn::~Rpn()
{
    std::cout << "Rpn destructor called" << std::endl;
}

Rpn & Rpn::operator=(Rpn const & obj)
{
    (void)obj;
    std::cout << "Rpn assignment operator called" << std::endl;
    return (*this);
}

int Rpn::checkExpr(std::string c)
{
    if (c == "+")
        return (this->_first + this->_second);
    else if (c == "-")
        return (this->_first - this->_second);
    else if (c == "*")
        return (this->_first * this->_second);
    if (this->_second == 0)
        throw std::runtime_error(std::string("Error."));   
    return (this->_first / this->_second);
}

void    Rpn::evalExpr(std::string line)
{
    std::stringstream expr(line);
    std::string c;
    int nb;

    while (expr >> c)
    {
        if (c == "+" || c == "-" || c == "/" || c == "*")
        {
            if (this->_stack.size() < 2)
                throw std::runtime_error(std::string("Error."));
            this->_second = this->_stack.top();
            this->_stack.pop();
            this->_first = this->_stack.top();
            this->_stack.pop();
            this->_res = Rpn::checkExpr(c);
            this->_stack.push(this->_res);
        }
        else if (c >= "0" && c <= "9")
        {
            std::istringstream ss(c);
            ss >> nb;
            this->_stack.push(nb);
        }
        else 
            throw std::runtime_error(std::string("Error."));   
    }
    if (this->_stack.size() != 1)
        throw std::runtime_error(std::string("Error."));
    std::cout << this->_res << std::endl;
}

