//#include <iostream>
//using namespace std;
//
//int main () {
//   int x = 50;
//   int y = 0;
//   double z = 0;
//
//   try {
//        if( y == 0 ) {
//          throw "Division by zero condition!";
//        }
//        z = z/y;
//        cout << z << endl;
//   }
//   catch (const char* msg) {
//        cerr << msg << endl;
//   }
//   return 0;
//}












#include<iostream>
#include<conio.h>
using namespace std;
void test(int x) {
    try {
        if (x > 0)
            throw x;
        else
            throw 'x';
    } catch (int x) {
        cout << "Catch a integer :" << x << endl;
    } catch (char x) {
        cout << "Catch a character :" << x << endl;
    }
}

int main() {

    cout << "Testing multiple catches:\n";
    test(10);
    test(-1);
    getch();
    return 0;
}
