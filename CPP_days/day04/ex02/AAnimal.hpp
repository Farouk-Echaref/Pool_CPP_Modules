/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:29:16 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/26 17:55:22 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
    public :
        AAnimal();
        AAnimal(AAnimal const & src);
        virtual ~AAnimal();

        AAnimal & operator=(AAnimal const & obj);

        std::string getType() const;
        virtual void    makeSound() const = 0;
    protected:
        std::string _type;
};

#endif