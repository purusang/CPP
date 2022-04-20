#include<iostream>
using namespace std;
class Copy{
    int num;
    public:
    Copy(){ }   //default constructor
    Copy(int a){    //initializing constructor
        num=a;
    }
    Copy( Copy &c ){   //Copy constructor
        num = c.num;
        cout << "copy constructor called"<<endl;
    }
    void show( ){
        cout<< num;
    }
};
int main(){
    Copy A(200);   //Object A created and initialized
    Copy B(A);  // Copy constructor called
    Copy C=A;  // Copy constructor called
    Copy D;
    D=A;  //Copy constructor not called because object D not newly created object.
                //it is an assignment operation.
    return 0;
}
