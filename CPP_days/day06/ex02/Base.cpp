/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:56:20 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/28 20:09:33 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base::~Base(){}

Base * generate(void)
{
    Base *ptr;
    
    srand((unsigned) time(NULL));
	int random = rand();


    if (random % 3 == 0)    
        ptr = new A();
    else if (random % 3 == 1)
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
    
    B *ptr2 = dynamic_cast<B*>(p);
    if (ptr2)
        std::cout << "P is of type B()" << std::endl;

    C *ptr3 = dynamic_cast<C*>(p);
    if (ptr3)
        std::cout << "P is of type C()" << std::endl;
}

void identify(Base& p)
{
    try{
        A &ptr1 = dynamic_cast<A&>(p);
        std::cout << "P is of type A()" << std::endl;
        (void)ptr1;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try{
        B &ptr2 = dynamic_cast<B&>(p);
        std::cout << "P is of type B()" << std::endl;
        (void)ptr2;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try{
        C &ptr3 = dynamic_cast<C&>(p);
        std::cout << "P is of type C()" << std::endl;
        (void)ptr3;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
    
    return (0);
}