//// An example of implicit conversion
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int x = 10; // integer x  ,,   @
//    unsigned int ux = 200;
//    char y = 'a'; // character c
//
//    cout<< x + ux << endl;
////    int sv = -10;
////    unsigned int usv = sv;
////    cout<< "the result of sum is:"<< usv + sv<<endl;
//
//    // y implicitly converted to int. ASCII
//    // value of 'a' is 97
//    x = x + y;  // int , char , among these two int is the larger one
//    cout<<"x after integer conversion: "<<x<<endl;
//
//    // x is implicitly converted to float
//    float z = x + 1.1;   // int , float ; float
//
//    cout << "x = " << x << endl
//         << "y = " << y << endl
//         << "z = " << z << endl;
//
//    return 0;
//}

#include <iostream>
using namespace std;
int main()
{
int num; // declare int type variable
double num2 = 15.25; // declare and assign the double variable

// use implicit type conversion to assign a double value to int variable
num = num2;  //15.25 -> 15
cout << " The value of the int variable is: " << num << endl;
cout << " The value of the double variable is: " << num2 << endl;
return 0;
}
