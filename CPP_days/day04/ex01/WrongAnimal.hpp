/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:47:02 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/05 00:49:04 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    public :
        WrongAnimal();
        WrongAnimal(WrongAnimal const & src);
        ~WrongAnimal();

        WrongAnimal & operator=(WrongAnimal const & obj);

        std::string getType() const;
        void    makeSound() const;
    protected:
        std::string _type;
        
    
};

#endif