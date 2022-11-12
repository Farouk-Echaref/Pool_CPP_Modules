/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:01:55 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/13 00:03:46 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        unsigned int i = 0;
        int found;
        std::string temp;
        std::string line;
        std::string src(argv[1]);
        std::string s1(argv[2]);
        std::string s2(argv[3]);
        temp = src;
        std::ofstream Dest(temp.append(".replace"));
        std::ifstream Sourc(src);
        if (Sourc.is_open() && Dest.is_open())
        {
            while (std::getline (Sourc, line))
            {
                found = line.find(s1);
                while(found > 0)
                {
                    line.erase(found,s1.length());
                    line.insert(found, s2);
                    found = line.find(s1);
                    i++;
                }
                Dest << line << std::endl;
            }
        } 
        Sourc.close();
    }
}