/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dest_virtu.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:36:46 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/03 00:46:30 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
 
using namespace std;
 
class base {
  public:
    base()    
    { cout << "Constructing base\n"; }
    virtual ~base()
    { cout << "Destructing base\n"; }    
};
 
class derived : public base {
  public:
    derived()    
    { cout << "Constructing derived\n"; }
     ~derived()
    { cout << "Destructing derived\n"; }
};
 
int main()
{
  derived *d = new derived(); 
  base *b = d;
  delete b;
  return 0;
}