/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:29:16 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 05:21:21 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    public :
        Animal();
        Animal(Animal const & src);
        virtual ~Animal();

        Animal & operator=(Animal const & obj);

        std::string getType() const;
        virtual void    makeSound() const = 0;
    protected:
        std::string _type;
};

#endif