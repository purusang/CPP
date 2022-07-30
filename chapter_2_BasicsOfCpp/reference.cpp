#include <iostream>
using namespace std;
typedef int integer;    //we can use integer in place of int
int main() {

    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza
    meal = "burger";
    cout<<food<<endl;
    cout<<meal<<endl;
    return 0;
}


