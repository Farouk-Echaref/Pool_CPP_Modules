/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:55:11 by fech-cha          #+#    #+#             */
/*   Updated: 2023/03/16 04:36:44 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// int main()
// {
//     // std::string str = "2011-01-05 | 5";
//     std::string str = "3 05      5";

//     std::istringstream myStream(str);
//     int nb;

//     // //stream a number till white space is reached
//     // myStream >> nb;

//     // std::cout << nb << std::endl;


//     //tari9a 2:
//     while (myStream >> nb)
//     {
//         std::cout << "streaming succesful n: " << nb << std::endl;
//     }
//     std::cout << "stream was not successful " << std::endl;
    
//     return (0);
// }

bool isValidLine(const string& line) 
{
   istringstream test(line);
   string date, sep, value, rest;

   test>>date>>sep>>value;
    
    if (test>>rest || sep != "|")
        return (false);
    return (true);
}

int main() {
    string line1 = "2022-03-15 | 50000  | ergerg";
    // string line2 = "2022-03-15 50000";
    // string line3 = "2022-03-15 | five thousand";

    // if (isValidLine(line1)) {
    //     cout << "Line 1 is valid." << endl;
    // } else {
    //     cout << "Line 1 is invalid." << endl;
    // }

    // if (isValidLine(line2)) {
    //     cout << "Line 2 is valid." << endl;
    // } else {
    //     cout << "Line 2 is invalid." << endl;
    // }

    // if (isValidLine(line3)) {
    //     cout << "Line 3 is valid." << endl;
    // } else {
    //     cout << "Line 3 is invalid." << endl;
    // }

     if (isValidLine(line1))
        cout << "correct format." << endl; 
    
    return 0;
}