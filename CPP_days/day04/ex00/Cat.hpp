/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 02:19:17 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/03 04:54:44 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat:public Animal
{
    public:
        Cat();
        Cat(Cat const & src);
        ~Cat();
        Cat & operator=(Cat const & obj);
        
        void makeSound() const;
};

#endif