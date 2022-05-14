#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
  ifstream file("text1.txt");
  string str;
  while (getline(file, str)) {
    cout << str << "\n";
  }
}
