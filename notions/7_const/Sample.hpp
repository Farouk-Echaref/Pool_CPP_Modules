/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:28:12 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/08 20:42:44 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>

class Sample
{
    public :
        float const pi;
        int qd;

        Sample(float const f);
        ~Sample(void);

        //cosnt in this prototype -> the instance of the class will never be changed 
        void    bar() const;
};

#endif