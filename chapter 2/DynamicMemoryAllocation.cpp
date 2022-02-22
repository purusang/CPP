#include <iostream>
using namespace std;

int main () {
   int* pvalue  = new int;  // 1 int space alloacation  1024[100]

   *pvalue = 100;     // Store value at allocated address

   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // free up the memory.



   /* dynamic memory allocation for arrays */
    char* cp = NULL;         // Pointer initialized with null
    cp  = new char[20];       // Request memory for the variable    1022[]1023[]1024[][][][][][][][][][][]

    cin>>cp;
    cout<<endl<< cp <<endl<<endl;

    delete [] cp;


//    int n;
//    cin>>n;
//    int arr[n];
//    arr[0] = 12;
//    cout << arr[0];

   return 0;
}
