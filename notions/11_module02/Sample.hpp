/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:33:31 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/14 22:39:37 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>

class Sample
{
    public:
        Sample();
        ~Sample();
    
        void    bar(char const c) const;
        void    bar(int const n) const;
        void    bar(float const z) const;
        void    bar(Sample const &i) const;  
};

#endif