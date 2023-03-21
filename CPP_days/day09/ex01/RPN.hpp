/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 03:59:58 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/21 04:48:43 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream> 
#include <iomanip> 
#include <utility>

class Rpn
{
    private:
        std::stack<int> _stack;
        int             _first;
        int             _second;
        int             _res;
        
    public:
        Rpn();
        Rpn(Rpn const & src);
        ~Rpn();
        Rpn & operator=(Rpn const & obj);
        
        void    evalExpr(std::string expr);
        int     checkExpr(char c);
        int     checkNumr(char c);
};

#endif