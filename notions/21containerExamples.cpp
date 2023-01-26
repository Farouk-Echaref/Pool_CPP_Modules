/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21containerExamples.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 02:42:36 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/26 03:01:02 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class Exmp
{
    private:
        int a;
        int b;
    public:
        Exmp(): a(0), b(0)
        {};
};

int main(void)
{
    std::list<int>                  lst;
    std::map<std::string, Exmp*>    map1; //key is a string , value is an object of class Exmp
    std::vector<int>                v1;
    std::vector<int>                v2(69, 420);//creates a vector of 42 integers and initializes all of them with the value 100


    // std::cout << v2.size() << std::endl;
    // std::cout << v2[68] << std::endl;

    //add elements to the list

    lst.push_back(1);
    lst.push_back(50);
    lst.push_back(100);
    lst.push_front(69);

    map1["Exmp1"] = new Exmp;
    map1["Exmp2"] = new Exmp;
    map1["Exmp3"] = new Exmp;

    std::list<int>::const_iterator it;
    std::list<int>::const_iterator ite = lst.end();

    for(it = lst.begin(); it != ite; ++it)
        std::cout << *it << std::endl;

    return (0);    
}