/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:08:00 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/10 01:25:06 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{ 
    private:
        std::string _FirstName;
        std::string _LastName;
        std::string _NickName;
        std::string _PhoneNumber;
        std::string _DarkestSecret;
        
    public:
        Contact(void){}
        ~Contact(){}
        /*Setters: */
        void    setFirstName(std::string _FirstName);
        void    setLastName(std::string _LastName);
        void    setNickName(std::string __NickName);
        void    setPhoneNumber(std::string _PhoneNumber);
        void    setDarkestSecret(std::string _DarkestSecret);

        /*Getters: */
        std::string    getFirstName(void) const;
        std::string    getLastName(void) const;
        std::string    getNickName(void) const;
};

#endif 