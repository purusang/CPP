#include <iostream>
using namespace std;

class Check
{
    private:
       int i;
    public:
       Check() { i=0; }
       void operator ++()
          {
              ++i;
              cout<< "prefix called"<<endl;

          }
        void operator ++(int)
          {
              ++i;
              cout<< "postfix called"<<endl;

          }
       void Display()
          { cout << "i=" << i << endl; }
};

int main()
{
    Check obj;

    // Displays the value of data member i for object obj
    obj.Display();

    // Invokes operator function void operator ++( )
    ++obj;
    obj.Display();

    // Invokes the operator function void operator ++(int)
    obj++;
    obj.Display();

    return 0;
}
