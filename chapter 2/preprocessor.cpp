//#include <iostream>
//using namespace std;
//
//#define PI 3.14159
//
//int main () {
//   cout << "Value of PI :" << PI << endl; //gcc -E preprocessor.cpp > pp.p
//
//   return 0;
//}




//#include <iostream>
//using namespace std;
//#define MIN(a,b) (((a)<(b)) ? a : b)
//int main () {
//int i, j;
//i = 100; j = 30;
//cout <<"The minimum is " << MIN(i, j) << endl;
//return 0;
//}



/* Example using #ifdef and #include directive by TechOnTheNet.com */

#include <stdio.h>
#include "math.cpp"
#include <iostream>
//#define YEARS_OLD 10
#define MKSTR(x) #x
#define CONCAT(a,b) a ## b
using namespace std;
int main()
{
//   #ifdef YEARS_OLD
//   printf("TechOnTheNet is over %d years old.\n", YEARS_OLD);
//   #endif
int xy = 1000;
    cout<< MKSTR(I love Nepal)<<endl;
    cout<< CONCAT(x,y);
    cout<< endl << __FILE__;
//    printf("TechOnTheNet is a great resource.\n");
    printf("\nSquare no: %d", square(10));
   return 0;
}
