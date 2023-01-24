/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:56:10 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/24 01:22:14 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private:
        T *_arr;
        int _size;
        
    public:
        Array()
        {
            std::cout << "Array Default Constructor." << std::endl;
            _arr = new T(0);
            _size = 0;
        }
        Array(unsigned int n)
        {
            std::cout << "Array with n parameter." << std::endl; 
            _arr = new T[n];
            for(unsigned int i = 0; i < n; i++)
                _arr[i] = i;
            _size = n;
        }
        Array(Array const & src)
        {
            std::cout << "Array copy cnstructor" << std::endl;
            _arr = new T(src.size());
            *this = src;
        }
        Array & operator=(Array const & obj)
        {
            std::cout << "Array assignment operator called" << std::endl;
            if (_arr)
            {
                delete _arr;
                _arr = NULL;
            }
            _arr = new T(obj.size());
            _size = obj.size();
            for (int i = 0; i < _size; i++)
                _arr[i] = obj._arr[i];
            return (*this);
        }

        T & operator[](int index)
        {
            if (index >= _size)
            {
                std::string err = "Index out of bounds";
                throw (err);
            }
            return _arr[index];
        }
        
        int size() const
        {
            return (_size);
        }

};


#endif