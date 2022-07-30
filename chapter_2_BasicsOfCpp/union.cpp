#include <iostream>
#include <string.h>
using namespace std;
union Data {
   int i;
   char c;
   float f;
} data, data1;

int main( ) {
    Data d3;
    d3.i=65;
    cout<<d3.f<<endl;
   printf( "Memory size occupied by data : %d\t%d", sizeof(data), sizeof(data1.i));
   return 0;
}
