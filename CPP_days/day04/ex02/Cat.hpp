/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:19:17 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 03:07:32 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(Cat const & src);
        ~Cat();
        Cat & operator=(Cat const & obj);
        
        void makeSound() const;
        void    setIdea(const std::string & idea);
        std::string getIdea(int pos) const;
};

#endif