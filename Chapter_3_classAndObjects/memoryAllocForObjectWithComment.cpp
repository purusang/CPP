// C++ program for required implementation
#include <iostream>
using namespace std;

class Rectangle {
        int width;
        int length;

    public:
        Rectangle()
        {
            length = 0;
            width = 0;
        }

        Rectangle(int l, int w)
        {
            length = l;
            width = w;
            cout << "Constructor of rectangle" << endl;
        }

        ~Rectangle()
        {
            cout << "Destructor of rectangle" << endl;
        }

        int getLength()
        {
            return length;
        }

        int getWidth()
        {
            return width;
        }
};

int main()
{
    int i =0, j =1 , k = 100;
	// Object creation inside block
	{


        int k = 2;
        cout << "K inside the block = " << k << endl;
        Rectangle r(2, 3); // r is stored on stack


		cout << "K outside the block: " << k << endl;
		cout << "Inside Block1..." << endl;
		cout << "length of rectangle is : "
			<< r.getLength() << endl;
		cout << "width of rectangle is :"
			<< r.getWidth() << endl;
	}


	cout << " with the exit of the block, destructor\n"
		<< " called automatically for the object stored in stack."
		<< endl;

		/*
		// uncomment this code and run once you will get
		// the compilation error because the object is not in scope
		cout<<"length of rectangle is : "<< r.getLength();
		cout<< "width of rectangle is :" << r.getWidth();
		*/


	Rectangle* ptr2;
	{
		// object will be stored in heap
		// and pointer variable since its local
		// to block will be stored in the stack

		Rectangle* ptr3 = new Rectangle(5, 6);
		ptr2 = ptr3;
		cout << "********************************************"
			<< endl;
		cout << "Inside Block2" << endl;
		cout << "length of rectangle is : "
			<< ptr3->getLength() << endl;
		cout << "width of rectangle is :"
			<< ptr3->getWidth() << endl;

		// comment below line of code and
		// uncomment *important line*
		// and then check the object will remain
		// alive outside the block.

		// explicitly destroy object stored on the heap
		delete ptr3;
		ptr3= nullptr;
        //cout << "Length of ptr3 after pointer deletion: " << ptr3->getLength()<< endl;
	}

	cout << "length of rectangle is : "
		<< ptr2->getLength() << endl;

	cout << "width of rectangle is :"
		<< ptr2->getWidth() << endl;

	 delete ptr2; /* important line*/

	return 0;
}
