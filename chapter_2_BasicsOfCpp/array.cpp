#include <iostream>
using namespace std;
typedef int integer;    //we can use integer in place of int
int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cout << cars[0];
    return 0;
}




