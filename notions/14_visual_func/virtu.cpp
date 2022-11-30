/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtu.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:52:59 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/30 15:53:49 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Animal
{
    public:
        virtual std::string getName()
        {
            return ("Animal");
        }
};

class Dog: public Animal
{
    private:
        std::string _name;
    public:
        Dog(const std::string name): _name(name){}
        std::string getName()
        {
            return (this->_name);
        }
};




int main()
{
    Animal *An = new Animal();
    std::cout << An->getName() << std::endl;

    // Dog *Dg = new Dog("Husky");
    // std::cout << Dg->getName() << std::endl;

    Animal *dog = new Dog("Husky");
    std::cout << dog->getName() << std::endl;

    return (0);
}