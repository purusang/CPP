// C++ program to demonstrate function overriding
//
//#include <iostream>
//using namespace std;
//
//class Base {
//   public:
//    void print() {
//        cout << "Base Function" << endl;
//    }
//};
//
//class Derived : public Base {
//   public:
//    void print() {
//        cout << "Derived Function" << endl;
//    }
//};
//
//int main() {
//    Derived derived1;
//    derived1.print();
//    return 0;
//}













//
//// C++ program to access overridden function
//// in main() using the scope resolution operator ::
//
//#include <iostream>
//using namespace std;
//class Base {
//   public:
//    void print() { // overridden function
//        cout << "Base Function" << endl;
//    }
//};
//class Derived : public Base {
//   public:
//    void print() { // overriding function
//        cout << "Derived Function" << endl;
//    }
//};
//
//int main() {
//    Derived derived1, derived2;
//    derived1.print();
//
//    // access print() function of the Base class
//    derived2.Base::print();
//    return 0;
//}























//// C++ program to call the overridden function
//// from a member function of the derived class
//
//#include <iostream>
//using namespace std;
//
//class Base {
//   public:
//    void print() {
//        cout << "Base Function" << endl;
//    }
//};
//
//class Derived : public Base {
//   public:
//    void print() {
//        cout << "Derived Function" << endl;
//        // call overridden function
//        Base::print();
//    }
//};
//
//int main() {
//    Derived derived1;
//    derived1.print();
//    return 0;
//}





















//// C++ program to access overridden function using pointer
//// of Base type that points to an object of Derived class
//
//#include <iostream>
//using namespace std;
//
//class Base {
//   public:
//    void print() {
//        cout << "Base Function" << endl;
//    }
//};
//
//class Derived : public Base {
//   public:
//    void print() {
//        cout << "Derived Function" << endl;
//    }
//};
//
//int main() {
//    Derived derived1;
//    // pointer of Base type that points to derived1
//    Base* ptr = &derived1;
//    // call function of Base class using ptr
//    ptr->print();
//
//    return 0;
//}


