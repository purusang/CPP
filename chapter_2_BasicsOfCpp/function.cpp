//
//// C++ program to demonstrate the pointer and array relationship
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








// Pass by Value
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
//void swap(int &x, int &y){
//    int temp = x;
//    x = y;
//    y = temp;
//}










//
// Pass by pointer
//
//#include <iostream>
//using namespace std;
//
//// function declaration
//void swap(int *x, int *y){   // pass by pointer
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//int main () {
//   // local variable declaration:
//   int a = 100;
//   int b = 200;
//
//   cout << "Before swap, value of a :" << a << endl;
//   cout << "Before swap, value of b :" << b << endl;
//
//   swap(&a, &b);
//
//   cout << "After swap, value of a :" << a << endl;
//   cout << "After swap, value of b :" << b << endl;
//
//   return 0;
//}
//















////Return by reference
//#include <iostream>
//using namespace std;
//
//int n;
//
//int& test() {  // function will return reference
//    return a;    //  n variable itself is returned.   n[23434]
//}
//
//int main() {
//    test() = 5;     // n = 5;  a does not exist
//    cout<<n;
//    return 0;
//}
//Note: you cannot return local variables or a constant



