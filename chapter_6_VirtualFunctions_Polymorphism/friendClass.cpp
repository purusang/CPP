//#include<iostream>
//using namespace std;
//
//class S; //forward declaration
//class P{
//  // Other Declarations
//  friend class S;
//};
//
//class S{
//  // Declarations
//};
//int main(){
//    return 0;
//}











#include <iostream>
class A {
private:
	int a;

public:
	A() { a = 0; }
	friend class B; // Friend Class
};

class B {
private:
	int b;

public:
	void showA(A x)
	{
		// Since B is friend of A, it can access
		// private members of A
		std::cout << "A::a=" << x.a;
	}
};

int main()
{
	A a;
	B b;
	b.showA(a);
	return 0;
}


