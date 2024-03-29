/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 04:43:58 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/27 19:03:15 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *animal = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Animal of type : " << animal->getType() << std::endl;
    std::cout << "Animal of type : " << cat->getType() << std::endl;
    std::cout << "Animal of type : " << dog->getType() << std::endl;
    std::cout << "Animal of type : " << wrongCat->getType() << std::endl;
    
    animal->makeSound();
    cat->makeSound();
    dog->makeSound();
    wrongCat->makeSound();

    delete animal;
    delete dog;
    delete cat;
    delete wrongCat;
    
    return (0);
}