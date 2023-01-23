/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18templates.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:45:24 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/23 13:23:22 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// template<typename T>
// void Print(T value)
// {
//     std::cout << value << std::endl;
// }

// int main(void)
// {
//     Print(5);
//     Print(5.15464);
//     //or this way
//     Print<std::string>("testing templates");
    
//     return (0);
// }

//exemple using class

//create an array on the stack

template<typename T,int N>
class Array
{
    private:
        T A_Array[N];
    public:
        int GetSize() const
        {
            return (N);
        }
};

int main(void)
{
    Array<float,5> arr;
    Array<int,10> arr2;
    Array<std::string ,69> arr3;

    std::cout << arr.GetSize() << std::endl;

    return (0);
}
