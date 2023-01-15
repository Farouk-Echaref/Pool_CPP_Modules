/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testObjectThrow.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:20:40 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/15 16:36:16 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Test
{
    public:
        Test(){
            std::cout << "Call Construct." << std::endl;
        }
        ~Test(){
            std::cout << "Call Destruct." << std::endl;
        }
};

int main()
{
    try
    {
        Test e;
        throw e;
    }
    catch(Test &e)
    {
        std::cout << "Catched object" << std::endl;
    }
    // catch(Test e)
    // {
    //     std::cout << "Catched object" << std::endl;
    // }

    return (0);
}