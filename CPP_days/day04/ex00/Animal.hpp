/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:29:16 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/12 22:54:57 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    public :
        Animal();
        Animal(Animal const & src);
        virtual ~Animal();

        virtual Animal & operator=(Animal const & obj);

        std::string getType() const;
        void    makeSound() const;
    protected:
        std::string _type;
        
    
};

#endif