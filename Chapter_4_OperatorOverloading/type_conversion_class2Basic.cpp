// C++ program to illustrate the
// above conversion
#include <bits/stdc++.h>
using namespace std;

class Time {
	int hrs, mins;
public:
    Time(int a, int b)
    {
        hrs = a;
        mins = b;
    }
    operator int()
    {
        cout << "Conversion of Class Type to Primitive Type"<< endl;
        return (hrs * 60 + mins);
    }
	~Time()
	{
		cout << "Destructor is called."<< endl;
	}
};

int main()
{

	int hour = 2, mins = 20, duration;
	Time tObj(hour, mins);

	// Conversion OR duration = (int)t
	duration = tObj;
	cout << "Total Minutes are "<< duration << endl;

	// Conversion from Class type to
	// Primitive type
//	cout << "2nd method operator overloading " << endl;
//
//	duration = tObj.operator int();
//
//	cout << "Total Minutes are "<< duration << endl;

	return 0;
}
