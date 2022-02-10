//#include <iostream>
//
//using namespace std;
//
//int main () {
//   int  var = 20;   // actual variable declaration.
//   int  *ip;        // pointer variable
//   char c;
//   ip = &var;       // store address of var in pointer variable
//
////    cout<< &var<<endl;  //0x61fe14
////    cout << ip<<endl;  // 0x61fe14
////    cout << *ip << " " << var;   // * &var => var
//   cout << "Value of var variable: ";
//   cout << var << endl;   // 20
//
//   // print the address stored in ip pointer variable
//   cout << "Address stored in ip variable: ";
//   cout << ip << endl;   // address of var
//   cout << "Address stored in ip variable: ";
//   cout << &var << endl; // ip =&var  // same address
//
//   // access the value at the address available in pointer
//   cout << "Value of *ip variable: ";
//   cout << *ip << endl;   // 20
//    var = 30;
//    cout<< "var after direct change: " << var<<endl;
//    cout<< "var after direct change, display using pointer: " << *ip<<endl;
//    *ip = 40;   // var =40
//    cout<< "change of value using pointer: "<< var<<endl;
//   return 0;
//}















 Array is also a pointer to a contiguous memory of certain length.

#include <iostream>
using namespace std;
int main() {
	int *ip;
	int arr[] = { 10, 34, 13, 76, 5, 46 };
	ip = arr;
	for (int x = 0; x < 6; x++) {
		cout << *ip << endl;
		ip++;
	}
	cout<<endl<<endl<<"another way of accession the same array"<<endl;
	for (int x = 0; x < 6; x++) {
		cout << arr[x] << endl;
	}
	return 0;
}











// A simple application of pointer when multiple values are expected from a called function.
//#include <iostream>
//
//using namespace std;
//void test(int*, int*);
//
//
//int main() {
//	int a = 5, b = 5;
//
//	cout << "Before changing:" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	test(&a, &b);
//
//	cout << "\nAfter changing" << endl;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}
//
//void test(int* n1, int* n2) {
//	*n1 = 10;
//	*n2 = 11;
//}
//
//
//
//
//
//
//
//
//
//void arrayWithPointer(int* arr, int len){
//    for(int i=0; i<len; i++){
//        cout<<arr[i]<<endl;
//    }
//}
