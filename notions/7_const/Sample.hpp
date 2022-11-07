/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:28:12 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/03 20:36:15 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>

class Sample
{
    public:
        float const pi;
        int qd;

        Sample(float const f);
        ~Sample(void);

        //const here means the instance of the class wil never be altered 
        void    bar(void) const;
}

#endif