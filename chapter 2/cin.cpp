//// C++ program to demonstrate the
//// cin object
//#include <iostream>
//using namespace std;
//
//// Driver Code
//int main()
//{
//	string s;
//
//	// Take input using cin
//	cin >> s;
//
//	// Print output
//	cout << s;
//
//	return 0;
//}


//
//// C++ program to illustrate the take
//// multiple input
//#include <iostream>
//using namespace std;
//
//// Driver Code
//int main()
//{
//	string name;
//	int age;
//
//	// Take multiple input using cin
//	cin >> name >> age;
//
//	// Print output
//	cout << "Name : " << name << endl;
//	cout << "Age : " << age << endl;
//
//	return 0;
//}








//// C++ program to illustrate the use
//// of cin.getline
//#include <iostream>
//using namespace std;
//
//// Driver Code
//int main()
//{
//	char name[30];
//
//	// Reads stream of 3
//	// characters
//	cin.getline(name, 10);
//
//	// Print output
//	cout << name << endl;
//
//	return 0;
//}



//// C++ program to illustrate the use
//// of cin.read()
//#include <iostream>
//using namespace std;
//
//// Driver Code
//int main()
//{
//	char gfg[20];
//
//	// Reads stream of characters
//	cin.read(gfg, 10);
//
//	// Print output
//	cout << gfg << endl;
//
//	return 0;
//}

//
//
// C++ program to illustrate the use
// of cin.ignore()
#include <iostream>
#include <ios>
#include <limits>

#include "math.cpp"
using namespace std;
int main()
{
	int x, y , z;
	char str[80];
	cout << "Enter a number andstring:\n";

	cin>>x;   //12 Enter \n
//	cin>>str;

	// clear buffer before taking
	// new line
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Input a string
	cin.getline(str, 80);
	cout << "You have entered:\n";
	cout<<x;
	cout << str << endl;

	return 0;
}
