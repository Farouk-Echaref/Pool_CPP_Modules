/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:08:43 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/10 06:11:11 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        int     _CountContact;
        Contact _Contacts[8];
    public:
        PhoneBook(void): _CountContact(0)
        {}
        ~PhoneBook(void){}
        void    IncreaseContact(void);
        void    CheckAdd(void);
        void    Add(void);
        void    Search(void) const;
        void    Exit(void) const;
};

#endif