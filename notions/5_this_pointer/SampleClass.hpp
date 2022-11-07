/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SampleClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:41:29 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/02 23:49:42 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
    public:
        int     foo;
        
        Sample(void);
        ~Sample(void);
        
        void    bar(void);
};

#endif