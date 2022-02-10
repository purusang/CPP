//
//// C++ program to demonstrate the
//// cin object
//#include <iostream>
//using namespace std;
//
//int* checkTheLifeOfVarInFunction(){
//    int arr[2];
//    arr[0] = 1;
//    arr[1] =2;
//    cout<<arr[0]<<endl<<arr[1]<<endl;
//    return arr;
//}
//int main()
//{
//    int *returnedPointer;
//    returnedPointer = checkTheLifeOfVarInFunction();
//    cout<< returnedPointer[0]<<" "<<returnedPointer[1]<<endl;
//	return 0;
//}










// C++ program to demonstrate the
// cin object
//#include <iostream>
//using namespace std;
//
//void changeValueOfMainFunction(int *arr11){
//
//    arr11[0] = 111;
//    arr11[1] =2222;
//    cout<<"In function: "<<arr11[0]<<" "<<arr11[1]<<endl;
//}
//int main()
//{
//    int arr[2];
//    arr[0] = 1;
//    arr[1] =2;
//    changeValueOfMainFunction(arr);
//    cout<<"In main Function: "<< arr[0] <<" "<<arr[1];
//	return 0;
//}








// Call by Value
//
//#include <iostream>
//using namespace std;
//
//// function declaration
//void swap(int x, int y);
//
//int main () {
//   // local variable declaration:
//   int a = 100;
//   int b = 200;
//
//   cout << "Before swap, value of a :" << a << endl;
//   cout << "Before swap, value of b :" << b << endl;
//
//   // calling a function to swap the values.
//   swap(a, b);
//
//   cout << "After swap, value of a :" << a << endl;
//   cout << "After swap, value of b :" << b << endl;
//
//   return 0;
//}






// Call by reference

//#include <iostream>
//using namespace std;
//
//// function declaration
//void swap(int &x, int &y);
//
//int main () {
//   // local variable declaration:
//   int a = 100;
//   int b = 200;
//
//   cout << "Before swap, value of a :" << a << endl;
//   cout << "Before swap, value of b :" << b << endl;
//
//   /* calling a function to swap the values using variable reference.*/
//   swap(a, b);
//
//   cout << "After swap, value of a :" << a << endl;
//   cout << "After swap, value of b :" << b << endl;
//
//   return 0;
//}

// Call by pointer

//#include <iostream>
//using namespace std;
//
//// function declaration
//void swap(int *x, int *y);
//
//int main () {
//   // local variable declaration:
//   int a = 100;
//   int b = 200;
//
//   cout << "Before swap, value of a :" << a << endl;
//   cout << "Before swap, value of b :" << b << endl;
//
//   /* calling a function to swap the values.
//      * &a indicates pointer to a ie. address of variable a and
//      * &b indicates pointer to b ie. address of variable b.
//   */
//   swap(&a, &b);
//
//   cout << "After swap, value of a :" << a << endl;
//   cout << "After swap, value of b :" << b << endl;
//
//   return 0;
//}
