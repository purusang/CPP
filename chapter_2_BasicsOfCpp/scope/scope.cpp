//#include <iostream>
//#include "var.h"
//using namespace std;
//
//int x =5;
//void fun(){
//    cout<< x <<endl;
//    x =10;
//}
//int main(){
//
//    int x =4;
////    cout << x <<endl;
////    fun();
////    cout << x << endl;
////    cout << var1;
//    cout<<x<<endl;
//    {
//        int x =100;
//        cout << x<<endl;
//    }
//    cout << x;
//}








/* auto */
//
//#include <iostream>
//using namespace std;
//
//void autoStorageClass()
//{
//
//    cout << "Demonstrating auto class\n";
//
//    // Declaring an auto variable
//    // No data-type declaration needed
//    int a = 32;  //  a integer   // automatically auto int
//    auto b = 3.2;  // b float,
//    auto c = "GeeksforGeeks";  // c char[]
//    auto d = 'G';  // chard
//
//    // printing the auto variables
//    cout << a << " \n";
//    cout << b << " \n";
//    cout << c << " \n";
//    cout << d << " \n";
//}
//
//int main()
//{
//
//    // To demonstrate auto Storage Class
//    autoStorageClass();
//
//    return 0;
//}


















// extern
//#include <iostream>
//#include "var.h"
//using namespace std;
//
//// declaring the variable which is to
//// be made extern an initial value can
//// also be initialized to x
//int x;
//void externStorageClass()
//{
//
//    cout << "Demonstrating extern class\n";
//
//    // telling the compiler that the variable
//    // x is an extern variable and has been
//    // defined elsewhere (above the main
//    // function)
//    extern int x;     // do not allocate separate space for x.
//
//    // printing the extern variables 'x'
//    cout << "Value of the variable 'x'"
//         << "declared, as extern: " << x << "\n";
//
//    // value of extern variable x modified
//    x = 2;
//
//    // printing the modified values of
//    // extern variables 'x'
//    cout
//        << "Modified value of the variable 'x'"
//        << " declared as extern: \n"
//        << x;
//}
//
//int main()
//{
//    extern int var1;
//    cout << var1;
//    // To demonstrate extern Storage Class
//    externStorageClass();
//
//    return 0;
//}









//
//#include <iostream>
//using namespace std;
//
//// Function containing static variables
//// memory is retained during execution
//int staticFun()
//{
//    cout << "For static variables: ";
//    static int count = 0;   // 0  // 2nd this line won't have an effect.
//    count++;                   // 1++ => 2
//    return count;   // 1, 2
//}
//
//// Function containing non-static variables
//// memory is destroyed
//int nonStaticFun()
//{
//    cout << "For Non-Static variables: ";
//
//    int count = 0;   //0
//    count++; //1
//    return count;   // 1,1
//}
//
//int main()
//{
//
//    // Calling the static parts
//    cout << staticFun() << "\n";   //1
//    cout << staticFun() << "\n";   //2
//
//    // Calling the non-static parts
//
//    cout << nonStaticFun() << "\n";
//
//    cout << nonStaticFun() << "\n"; //1
//    return 0;
//}
//















////
//#include <iostream>
//using namespace std;
//
//void registerStorageClass()
//{
//
//    cout << "Demonstrating register class\n";
//
//    // declaring a register variable
//    register char b = 'G';
//
//    // printing the register variable 'b'
//    cout << "Value of the variable 'b'"
//         << " declared as register: " << b;
//}
//int main()
//{
//
//    // To demonstrate register Storage Class
//    registerStorageClass();
//    return 0;
//}
//















//
//#include <iostream>
//using std::cout;
//
//class Test {
//public:
//    int x;
//
//    // defining mutable variable y
//    // now this can be modified
//    mutable int y;
//
//    Test()
//    {
//        x = 4;
//        y = 10;
//    }
//};
//
//int main()
//{
//    // t1 is set to constant
//    const Test t1;
//
//    // trying to change the value
//    t1.y = 20;
//    cout << t1.y;
//
//    // Uncommenting below lines
//    // will throw error
//    // t1.x = 8;
//    // cout << t1.x;
//    return 0;
//}
