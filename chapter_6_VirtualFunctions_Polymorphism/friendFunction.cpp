////// Program to illustrate friend function
//
//#include<iostream>
//
//using namespace std;
//
//class integer
//{
//  int a, b;
//  public:
//    void set_value()
//    {
//    a=50;
//    b=30;
//    }
//  friend int mean(integer s);  //declaration of friend function
//};
//
//int mean(integer s)
//{
//  return int(s.a+s.b)/2.0; //friend function definition
//}
//int main()
//{
//  integer c;
//  c.set_value();
//  cout<< "Mean value:" <<mean(c);
//  return 0;
//}



















#include <iostream>
using namespace std;
class B;

class A {
    public:
        void show(B &bObj);
};

class B {
    private:
        int b;

    public:
        B() { b = 0; }
        friend void A::show(B &); // Friend function
};
void A::show(B &bObj)
{
    cout << "show function in class A, hence I have access to private member of Class B: "<<endl;
    cout << bObj.b;
}


int main()
{
	A a;
	B b;
	a.show(b);
	return 0;
}
