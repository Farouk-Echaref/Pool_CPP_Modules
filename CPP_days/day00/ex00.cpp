/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:29:36 by fech-cha          #+#    #+#             */
/*   Updated: 2022/10/31 17:06:49 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            std::string str = argv[i];
            for (size_t j = 0; j < strlen(str); j++)
                std::cout << (char)toupper(str[j]);
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

//compile:
//c++ -std=c++98 -Wall -Wextra -Werror ex00.cpp -o megaphone