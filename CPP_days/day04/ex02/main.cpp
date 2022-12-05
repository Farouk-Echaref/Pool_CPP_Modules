/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 04:43:58 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 05:22:49 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal animal;
    Cat *cat = new Cat();
    Cat *cat2 = new Cat();

    cat->setIdea("idea1");
    cat->setIdea("idea2");
    cat->setIdea("idea3");
    cat->setIdea("idea4");

    *cat2 = *cat;

    delete cat;
    
    std::cout << cat2->getIdea(1) << std::endl;
  
    
    // animal->makeSound();
    // cat->makeSound();
    // dogs->makeSound();


    // animal->setIdea("Evolution of animal");
    
    // delete animal;
    // delete [] dogs;
    // delete [] cats;
    delete cat2;
    
    return (0);
}