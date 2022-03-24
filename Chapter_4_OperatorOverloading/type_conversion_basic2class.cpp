// C++ program to illustrate the
// type-conversion basic to class
#include <bits/stdc++.h>
using namespace std;

// Time Class
class Time {
	int hour;
	int mins;
public:
	Time()
	{
	    cout<< "default constructor " << endl;
		hour = 0, mins = 0;
	}
	Time(int t)
	{
	    cout << "parameterized constructor" << endl;
		hour = t / 60, mins = t % 60;
	}
	void Display()
	{
		cout << "Time =" << hour<< " h "<< mins << " m\n";
	}
	~Time(){
        cout << "destructor " << endl;
	}
};
int main()
{
	Time T1;
	int dur = 95;
	// Conversion of int type to class type
	T1 = dur;   // this line invokes the parameterized constructor
	T1.Display();
	return 0;
}
