/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   24stack.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:40:30 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/30 00:47:02 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

int  main()
{
    std::stack<int> testing;

    testing.push(1);
    testing.push(2);
    testing.push(3);
    testing.push(4);

    //check is stack is empty
    std::cout << testing.empty() << std::endl;

    std::cout << testing.top() << std::endl;

    testing.pop();

    std::cout << testing.top() << std::endl;

    return (0);
}