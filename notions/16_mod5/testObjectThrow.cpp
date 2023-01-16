/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testObjectThrow.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:20:40 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/16 12:17:51 by fech-cha         ###   ########.fr       */
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
    // catch(Test &e)
    // {
    //     std::cout << "Catched object" << std::endl;
    // }
    catch(Test e)
    {
        std::cout << "Catched object" << std::endl;
    }

    return (0);
}

// #include <cmath> // for sqrt() function

// int main()
// {
//     std::cout << "Enter a number: ";
//     double x;
//     std::cin >> x;

//     // try // Look for exceptions that occur within try block and route to attached catch block(s)
//     // {
//         // If the user entered a negative number, this is an error condition
//         // if (x < 0.0)
//         //     throw "Can not take sqrt of negative number"; // throw exception of type const char*

//         // Otherwise, print the answer
//         std::cout << "The sqrt of " << x << " is " << std::sqrt(x) << '\n';
//     // }
//     // catch (const char* exception) // catch exceptions of type const char*
//     // {
//     //     std::cerr << "Error: " << exception << '\n';
//     // }
// }