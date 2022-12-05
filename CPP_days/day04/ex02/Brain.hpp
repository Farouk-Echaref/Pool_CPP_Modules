/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 05:10:04 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/04 04:57:04 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        int _index;
        std::string _ideas[100];
    public:
        Brain();
        Brain(Brain const & src);
        ~Brain();
        Brain & operator=(Brain const & obj);
        
        void    setIdea(const std::string & idea);
        std::string getIdea(int pos) const;
};

# endif