/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:56:19 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/30 16:21:48 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
class Awesome  
{ 
    public:  
        Awesome( void ) : _n( 42 ) { return; }  
        int get( void ) const { return this->_n; }  
    private:
      int _n;
};  
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) 
{ 
    o << rhs.get(); return o;
}
 
template< typename T >  
void print( T const & x )
{
    std::cout << x << std::endl;
    return;
}

int main()
{
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];  
    iter(tab, 5, print<int>);  
    iter( tab2, 5, print<Awesome>);
    return 0;
}