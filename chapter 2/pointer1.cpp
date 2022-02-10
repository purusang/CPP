//
//
//// program to understand the relation between pointer and array.
//#include <iostream>
//using namespace std;
//
//int main () {
//   // an array with 5 elements.
//   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
//   double *p;
//
//   p = balance;
//
//   // output each array element's value
//   cout << "Array values using pointer " << endl;
//
//   for ( int i = 0; i < 5; i++ ) {
//      cout << "*(p + " << i << ") : ";
//      cout << *(p + i) << endl;
//   }
//   cout << "Array values using balance as address " << endl;
//
//   for ( int i = 0; i < 5; i++ ) {
//      cout << "*(balance + " << i << ") : ";
//      cout << *(balance + i) << endl;
//   }
//
//   return 0;
//}














//
//// C++ program to illustrate call-by-methods in C++
// Better finish function before these examples
//#include <bits/stdc++.h>
//using namespace std;
////Pass-by-Value
//int square1(int n)
//{
//    //Address of n in square1() is not the same as n1 in main()
//    cout << "address of n1 in square1(): " << &n << "\n";
//
//    // clone modified inside the function
//    n *= n;
//    return n;
//}
////Pass-by-Reference with Pointer Arguments
//void square2(int *n)
//{
//    //Address of n in square2() is the same as n2 in main()
//    cout << "address of n2 in square2(): " << n << "\n";
//
//    // Explicit de-referencing to get the value pointed-to
//    *n *= *n;  // *n = *n * *n //  *n = *n + *n
//}
////Pass-by-Reference with Reference Arguments Or simply Call by Pointer.
//void square3(int &n)
//{
//    //Address of n in square3() is the same as n3 in main()
//    cout << "address of n3 in square3(): " << &n << "\n";
//
//    // Implicit de-referencing (without '*')
//    n *= n;
//}
//void pointerSquare()
//{
//    //Call-by-Value
//    int n1=8;
//    cout << "address of n1 in main(): " << &n1 << "\n";
//    cout << "Square of n1: " << square1(n1) << "\n";
//    cout << "No change in n1: " << n1 << "\n";
//
//    //Call-by-Reference with Pointer Arguments
//    int n2=8;
//    cout << "address of n2 in main(): " << &n2 << "\n";
//    square2(&n2);
//    cout << "Square of n2: " << n2 << "\n";
//    cout << "Change reflected in n2: " << n2 << "\n";
//
//    //Call-by-Reference with Reference Arguments
//    int n3=8;
//    cout << "address of n3 in main(): " << &n3 << "\n";
//    square3(n3);
//    cout << "Square of n3: " << n3 << "\n";
//    cout << "Change reflected in n3: " << n3 << "\n";
//
//
//}
////Driver program
//int main()
//{
//    pointerSquare();
//}
//







