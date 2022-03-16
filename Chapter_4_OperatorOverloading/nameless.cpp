using namespace std;
#include <iostream>

class Sample
{
	private:
	int count;

	public:
	Sample()
	{ count = 0, cout << "D constructor called"<<endl;}

	Sample(int c){ count = c, cout << "Parameterized constructor called"<<endl;}

	//Operator overloading function definition
	Sample operator++()
	{
		++count;
		return Sample(count);
	}

	void printValue()
	{
		cout<<"Value of count : "<<count<<endl;
	}
	~Sample(){cout<<"Destructor called"<<endl;}
};

//main program
int main()
{
	int i = 0;
	Sample S1(100), S2;

	for(i=0; i< 1; i++)
	{
		S2 = ++S1;

		cout<<"S1 : ";
		S1.printValue();

		cout<<"S2 : ";
		S2.printValue();
	}
	return 0;
}
