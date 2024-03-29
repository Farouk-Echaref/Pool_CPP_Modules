/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 04:42:54 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 03:07:46 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
    public:
        Dog();
        Dog(Dog const & src);
        ~Dog();
        Dog & operator=(Dog const & obj);
        
        void makeSound() const;
        void    setIdea(const std::string & idea);
        std::string getIdea(int pos) const;
    private:
        Brain *_brain;
};

#endif