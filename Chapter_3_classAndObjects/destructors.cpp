#include <iostream>
using namespace std;
class Employee
 {
     int *i;
   public:
        Employee()
        {
            i = new int[10];
            cout<<"Constructor Invoked"<<endl;
        }
        ~Employee()
        {
            //delete [] i;
            cout<<"Destructor Invoked"<<endl;
        }
};
int main(void)
{
    Employee e1, e3; //creating an object of Employee
    //creating an object of Employee

    {
        cout << "inside block"<< endl;
         Employee e2;
    }
    cout<< " outside block" << endl;
    return 0;
}
