/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_namespace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 02:09:57 by fech-cha          #+#    #+#             */
/*   Updated: 2022/07/04 03:10:04 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//namespaces in cpp

#include <stdio.h>
#include <iostream>

int gl_var = 1;
int f(void) { return 2; }

namespace Foo {
	
	int	gl_var = 3;
	int	f(void) { return 4; }
}

namespace Bar {

	int gl_var = 5;
	int	f(void) { return 6; }
}

//aliasing
namespace muf = Bar; 

// :: is Scope resolution operator

//namespace aliasing (nested)
// namespace foo {
//     namespace bar {
//          namespace baz {
//              int qux = 42;
//          }
//     }
// }
 
// namespace fbz = foo::bar::baz;
 
// int main()
// {
//     std::cout << fbz::qux << '\n';
// }
//output : 42

//using namespaces
int main(void)
{
	printf("gl_var =   %d\n",gl_var);
	printf("f()    =   %d\n\n", f());

	printf("Foo::gl_var =   %d\n",Foo::gl_var);
	printf("Foo::f()    =   %d\n\n", Foo::f());

	printf("Bar::gl_var =   %d\n",Bar::gl_var);
	printf("Bar::f()    =   %d\n\n", Bar::f());

	printf("muf::gl_var =   %d\n",muf::gl_var);
	printf("muf::f()    =   %d\n\n", muf::f());

	//different format for the gl_var (scope global)
	printf("::gl_var =   %d\n",::gl_var);
	printf("::f()    =   %d\n\n", ::f());

	return (0);
}