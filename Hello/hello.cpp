#include <iostream>
using namespace std; // It's an scope where code cin and cout are defined
int main()
{
    float temperature;
    temperature =32;
    cout<<"Hello World\n"; // In C: printf("Hello World");
    // cout is defined in the "std" namespace
    if( temperature > 40){
        cout<< "It's too hot.";
    }
    else{
        cout<<"Temperature is enjoyable";
    }
    return 1;
}
