/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstract.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 04:55:16 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/04 05:05:21 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter
{
    private:
        std::string _name;
    public:
        virtual void attack(const std::string & target) = 0;
        void sayHello(const std::string & target);
};

class Warrior: public ACharacter
{
    public:
        virtual void attack(const std::string & target);
};

void    ACharacter::sayHello(const std::string & target)
{
    std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::attack(const std::string & target)
{
    std::cout << "Attacks " << target << " with a sword!" << std::endl;
}

int main()
{
    ACharacter *Zeus = new Warrior();

    Zeus->attack("God");
    Zeus->sayHello("Testing");

    return (0);
}