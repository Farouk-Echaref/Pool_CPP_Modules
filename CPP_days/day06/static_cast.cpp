
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

int main(void)
{
	float a = 420.042f; // reference value

	void * b = &a; // implicit reinterpretation cast
	void * c =  (void *) &a; // explicit reinterpretation cast

	void * d = &a; // implicit promotion -> okay (no problem to move to a more generic type)
    std::cout << d << std::endl;
	// int * e = d; // implicit demotion -> not really okay
    
	int * f = (int *) d; // explicit demotion -> okay
    std::cout << f << std::endl;
}