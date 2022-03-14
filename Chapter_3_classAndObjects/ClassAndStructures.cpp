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





















