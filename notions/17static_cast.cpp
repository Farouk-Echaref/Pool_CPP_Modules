
#include <iostream>
// using namespace std;
// class Base {
// };
// class Derived : public Base {
// };
// int main()
// {
//     Derived d1;
//     Base* b1 = (Base*)(&d1); // allowed
//     Base* b2 = static_cast<Base*>(&d1);
  
//     return 0;
// }

// int main(void)
// {
// 	float a = 420.042f; // reference value

// 	void * b = &a; // implicit reinterpretation cast
// 	void * c =  (void *) &a; // explicit reinterpretation cast

// 	void * d = &a; // implicit promotion -> okay (no problem to move to a more generic type)
//     std::cout << d << std::endl;
// 	// int * e = d; // implicit demotion -> not really okay
    
// 	int * f = (int *) d; // explicit demotion -> okay
//     std::cout << f << std::endl;
// }

// int main(void)
// {
	// int a = 42; // reference value

	// double b = 42.5; // implicit promotion -> ok
	// int c = b; // implicit demotion -> no!
	// int d = static_cast<int>(b); // explicit demotion -> ok

    // std::cout << d << std::endl;

	// return 0;

	// double value = 6.9;

	// //C type casting
	// double a = (int)value + 4.20;
	// std::cout << a << std::endl;

	// //equivalent of this in c++
	// double s = static_cast<int>(value) + 4.20;
	// std::cout << s << std::endl;

	// return (0);
// }

class Parent {};
class Child1: public Parent {}; // Parent is more generic
class Child2: public Parent {}; // Child1 & Child2 more accurate

class Unrelated {}; // detached from the hierarchy of the inheritance tree


int main()
{
	Child1 a; //reference value 

	Parent *b = &a; //implicit upcast okey
	// Child2 *c = b; //implicit downcast no

	Child2 * d = static_cast<Child2*>(b); //expicit downcast okey

	// Unrelated *e = static_cast<Unrelated*>(&a); //explicit conversion NO

	return (0);
}