//// Program 4
//// C++ program to demonstrate Inheritance in structure
//#include <iostream>
//using namespace std;
//
//struct Base {
//public:
//    int x;
//};
//
//struct Derived : Base {
//public:
//    int y;
//}; // Is equivalent to struct Derived : public Base {}
//
//int main()
//{
//    Derived d;
//    d.x = 20; // Works fine because inheritance is public
//    cout << d.x;
//    getchar();
//    return 0;
//}




























//// Program 1
//// CPP Program to demonstrate that Members of a class are
//// private by default
//#include <bits/stdc++.h>
//using namespace std;
//struct Book{
//    int x;
//};
//
//class Test {
//    // x is private
//    int x;
//};
//
//// Driver Code
//int main()
//{
//
//    Book b;
//    b.x = 20;
//    // compiler error because x is private
//    getchar();
//    return 0;
//}
























//// C++ Program to Implement Member functions inside
//// structure
//
//#include <iostream>
//using namespace std;
//
//struct marks {
//    int num;
//
//    // Member function inside Structure to
//    // take input and store it in "num"
//    void Set(int temp) { num = temp; }
//
//    // function used to display the values
//    void display() { cout << "num=" << num; }
//};
//
//// Driver Program
//int main()
//{
//    marks m1;
//
//    // calling function inside Struct to
//    // initialize value to num
//    m1.Set(9);
//
//    // calling function inside struct to
//    // display value of Num
//    m1.display();
//}























// Constructor in C is not allowed whereas it's possible in cpp.

//#include <stdio.h>
//
//struct Student {
//    int roll;
//    Student(int x) { roll = x; }
//};
//
//// Driver Program
//int main()
//{
//    struct Student s(2);
//    printf("%d", s.roll);
//    return 0;
//}






















//// C program to illustrate empty structure
//
//#include <stdio.h>
//
//// empty structure
//struct Record {
//};
//
//// Driver Code
//int main()
//{
//    struct Record s;
//    printf("%lu\n", sizeof(s));
//    return 0;
//}



















//// C program to illustrate pointer to structure

#include <stdio.h>
using namespace std;
// empty structure
struct Record {

};

// Driver Code
int main()
{
    Record s;
//    s.serialNo = 100;
//    Record* rp;
//    rp = &s;
//    Record &refVar = s;
//    int a =99;
//    int &b = a;

    printf("%lu\n", sizeof(s));
    //printf("%d\n", rp->serialNo);
    return 0;
}

