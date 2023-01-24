/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:01:55 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/24 18:27:11 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        int found = 0;
        std::string temp;
        std::string line;
        std::string src(argv[1]);
        std::string s1(argv[2]);
        std::string s2(argv[3]);
        temp = src;
        std::ifstream Sourc(src);
        if (!Sourc.is_open())
            exit(1);
        std::ofstream Dest(temp.append(".replace"));
        if (Sourc.is_open() && Dest.is_open())
        {
            while (std::getline (Sourc, line))
            {
                found = line.find(s1);
                while(found != -1)
                {
                    line.erase(found,s1.length());
                    line.insert(found, s2);
                    found = (line).find(s1, found + s1.length());
                }
                Dest << line << std::endl;
            }
        } 
        Sourc.close();
    }
    else
        std::cout << "Not Enough Arguments!" << std::endl;
    return (0);
}