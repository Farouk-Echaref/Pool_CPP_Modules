/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20map.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:48:16 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/26 03:24:00 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>

//Array has the problem of the size not being fleible , it needs to known in advance , vectors are more dynamic
//maps take keys and values

int main()
{
    //stored in alphabetical order
    std::unordered_map<std::string, int> container;

    container["one"] = 1;
    container["two"] = 2;
    container["three"] = 3;
    container["four"] = 4;
    container["five"] = 5;
    container["six"] = 6;


    //invalid syntax in c++98
    // std::vector<int> v;
    // v = {3, 1, 4, 1, 5};
    

    // for (auto &i : container)
    //     std::cout << i.first << " = " << i.second << std::endl;

    for (std::unordered_map<std::string, int>::iterator i = container.begin(); i != container.end(); ++i)
        std::cout << i->first << " = " << i->second << std::endl;

    std::cout << container["two"] << std::endl;

    return (0);
}
