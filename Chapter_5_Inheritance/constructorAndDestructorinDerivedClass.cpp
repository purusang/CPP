#include <iostream>
using namespace std;

class base {//   w  w w   .  d   em    o  2 s   .c   o m
public:
   base() { cout << "Constructing base\n"; }
   ~base() { cout << "Destructing base\n"; }
};

class derived: public base {
public:
   derived() { cout << "Constructing derived\n"; }
   ~derived() { cout << "Destructing derived\n"; }
};

int main()
{
   derived ob;
   // do nothing but construct and destruct ob

   return 0;
}













// example with multi level inheritance.
//#include <iostream>
//using namespace std;
//
//class base {/*  ww   w .    d  em    o2   s  .   c  o  m*/
//public:
//  base() { cout << "Constructing base\n"; }
//  ~base() { cout << "Destructing base\n"; }
//
//};
//
//class derived1 : public base {
//public:
//  derived1() { cout << "Constructing derived1\n"; }
//  ~derived1() { cout << "Destructing derived1\n"; }
//};
//
//class derived2: public derived1 {
//public:
//  derived2() { cout << "Constructing derived2\n"; }
//  ~derived2() { cout << "Destructing derived2\n"; }
//};
//
//int main()
//{
//  derived2 ob;
//
//  // construct and destruct ob
//
//  return 0;
//}




















// example with multiple inheritance.
//#include <iostream>
//using namespace std;
//
//class base1 {/*w   w  w   .d   e  m  o   2  s  .  co  m  */
//public:
//  base1() { cout << "Constructing base1\n"; }
//  ~base1() { cout << "Destructing base1\n"; }
//};
//
//class base2 {
//public:
//  base2() { cout << "Constructing base2\n"; }
//  ~base2() { cout << "Destructing base2\n"; }
//};
//
//class derived: public base1, public base2 {
//public:
//  derived() { cout << "Constructing derived\n"; }
//  ~derived() { cout << "Destructing derived\n"; }
//};
//
//int main()
//{
//  derived ob;
//   // construct and destruct ob
//  return 0;
//}
