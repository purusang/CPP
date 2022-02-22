#include <bits/stdc++.h>
using namespace std;

class MyClass {       // The class
    private:
        int salary;
        string dob;
    public:             // Access specifier
        int myNum;        // Attribute (int variable)
        string myString;  // Attribute (string variable)
        void printNumber(){
            cout<<"My number is: " << myNum<<endl;
        }
        void printString();
};
void MyClass::printString(){
    cout<<"My string is: " <<  myString<<endl;
}

int main() {
  MyClass myObj;  // Create an object of MyClass

//  // Access attributes and set values
//  myObj.myNum = 15;
//  myObj.myString = "Some text";
//
//  // Print attribute values
//  cout << myObj.myNum << "\n";
//  cout << myObj.myString << endl;
//  myObj.printNumber();
    myObj.salary = 50000;

  return 0;
}
