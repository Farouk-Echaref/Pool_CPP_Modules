/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:53:50 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/23 00:43:50 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
    public:
        Base();
        virtual ~Base();
};

class A: public Base
{};

class B: public Base
{};

class C: public Base
{};

// Base * generate(void);
// void identify(Base* p);
// void identify(Base& p);

#endif