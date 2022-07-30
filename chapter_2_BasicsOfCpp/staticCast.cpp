//#include <iostream>
//using namespace std;
//int main()
//{
//    double f = 3.5;
//
//    // using cast operator
//    int b = static_cast<int>(f);
//    cout<<sizeof(static_cast<int>(f))<<endl;
//    cout << b;
//}

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    char c = 'a';

    // pass at compile time, may fail at run time
    int* q = (int*)&c;
    int* p = static_cast<int*>(&c);
    return 0;
}
