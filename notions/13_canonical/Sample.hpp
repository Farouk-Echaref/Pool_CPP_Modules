/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 03:21:41 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/16 03:25:29 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>

class Sample
{
    public:
        Sample(void);
        Sample(const int n);
        Sample(Sample const & src);
        ~Sample(void);

        Sample & operator=(Sample const & rhs);
        
        int getFoo(void) const;

    private:
        int _foo;
};

std::ostream & operator<<(std::ostream & o, Sample const & i);

#endif