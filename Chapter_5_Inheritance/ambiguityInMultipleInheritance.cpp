#include <iostream>
using namespace std;
class base1 {
    public:
      void someFunction( ) {cout<<"base1";}
};
class base2 {
    public:
        void someFunction( ) {cout<< "base2";}
};
class derived : public base1, public base2 {};

int main() {
    derived obj;
//    obj.someFunction() // Error!
    obj.base2   ::someFunction();
}
