#include <iostream>

using namespace std;

int main()
{
    string hello = "Hello";
    string world = "world!";
    string msg = hello + " " + world ;
    cout <<  msg << endl;
    msg[0] = 'h';
    cout <<  msg << endl;   // array or string index starts from 0
//    std::cout<<"Hello World!"<<std::endl;
    return 23;
}
