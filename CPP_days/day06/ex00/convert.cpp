/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:24:09 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/28 19:57:00 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.hpp"

int main(int argc, char **argv)
{
    int check = 0;;
    
    if (argc != 2)
    {
        std::cout << "Arguments Error!" << std::endl;
        return (-1);
    }
    std::string str = argv[1];

    specialCases(str, &check);
    // //case of char
    if (strlen(argv[1]) == 1 && isNotNum(argv[1]))
        castChar(argv[1][0]);
    
    //case of Int
    else if (isInt(argv[1]) && check == 0)
       castInt(argv[1]);

    //case of float
    else if(isFloat(argv[1]) && check == 0)
        castFloat(str);

    //case of double
    else if(isDouble(argv[1]) && check == 0)
        castDouble(str);
    else if (check == 0)
        errorInput();
    
    return (0);
}