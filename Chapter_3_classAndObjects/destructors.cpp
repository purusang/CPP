#include <iostream>
using namespace std;
class Employee
 {
   public:
        Employee()
        {
            cout<<"Constructor Invoked"<<endl;
        }
        ~Employee()
        {
            cout<<"Destructor Invoked"<<endl;
        }
};
int main(void)
{
    Employee e1, e3, e4, e987987; //creating an object of Employee
    Employee e2; //creating an object of Employee

    {

    }
    return 0;
}
