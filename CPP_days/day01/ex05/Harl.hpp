/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 00:53:50 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/13 04:26:45 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# define CALL_MEMBER_FN(object,ptrToMember)  ((object).*(ptrToMember))

#include <iostream>
class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public:
        Harl();
        ~Harl();
        void    callMemberPtr(void(Harl::*fp)(void));
        void    complain(std::string level);  
};

typedef void(Harl::*Harlptr)(void);

#endif