/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:59:35 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/08 23:33:35 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>

class Sample
{
    public:
        int publicFoo;

        Sample(void);
        ~Sample(void);

        void    publicBar(void) const;

    private : 
        int _privateFoo;
        void    _privateBar() const;
};

#endif