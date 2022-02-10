// C++ program to demonstrate
// explicit type casting

#include <iostream>
using namespace std;

int main()
{
    double x = 1.2;

    // Explicit conversion from double to int . C type ex conv.
    int sum = (int)x + 1;

    cout << "Sum = " << sum;

    return 0;
}
