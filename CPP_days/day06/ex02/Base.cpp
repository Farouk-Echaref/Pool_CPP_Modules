/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:56:20 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/23 00:52:11 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base * generate(void)
{
    Base *ptr;
    int random = 100 + (rand() % 101);

    if (random % 2 == 0)    
        ptr = new A();
    else if (random % 2 == 1)
        ptr = new B();
    else
        ptr = new C();
    return (ptr);
}

void identify(Base *p)
{
    A *ptr1 = dynamic_cast<A*>(p);
    if (ptr1)
        std::cout << "P is of type A()" << std::endl;
    
    // B *ptr2 = dynamic_cast<B*>(p);
    // if (ptr2)
    //     std::cout << "P is of type B()" << std::endl;

    // C *ptr3 = dynamic_cast<C*>(p);
    // if (ptr3)
    //     std::cout << "P is of type C()" << std::endl;
}


//try/catch
void identify(Base& p)
{
    A &ptr = dynamic_cast<A&>(p);   
}

int main()
{
    Base *ptr = new A();
    identify(ptr);
   
    return (0);
}