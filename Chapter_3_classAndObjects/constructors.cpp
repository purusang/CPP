////
////// Cpp program to illustrate the
////// concept of Constructors
//#include <iostream>
//using namespace std;
//
//class Car
//{
//    private:
//       int max_speed, no_of_gears;
//    public:
//
//
//        // Default Constructor
//        Car())  // does not take any parameter.
//        {
//            max_speed = 80;
//            no_of_gears = 1;
//            cout << "car constructor is called." <<endl;
//        }
//
//        void getData(){
//            cout<< "max speed = " << max_speed << endl;
//            cout << "no of gears = " << no_of_gears << endl;
//        }
//        void setData(int ms , int nof){
//            max_speed = ms;
//            no_of_gears = nof;
//        }
//};
//
//int main()
//{
//    //
//    Car tata, suzuki, duster;
//    tata.getData();
//    tata.setData(150, 6);
//    tata.getData();
//    return 1;
//}













//// CPP program to illustrate
//// parameterized constructors
//#include <iostream>
//using namespace std;
//
//class Point
//{
//    private:
//        int x, y;  // (x,y)
//
//    public:
//        // Parameterized Constructor
//        Point(){
//        }
//        Point(int x1, int y1)  // it must take arguements.
//        {
//            x = x1;
//            y = y1;
//        }
//
//        int getX()
//        {
//            return x;
//        }
//        int getY()
//        {
//            return y;
//        }
//};
//
//int main()
//{
//    // Constructor called
//
//    Point p1(10, 15), p2(100, 200);
//    Point p3;  // compiler does generates a default constructor rather looks for a user defined default constructor.
//
//    // Access values assigned by constructor
//    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << endl;
//    cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY() << endl;
//    cout << "p3.x = " << p3.getX() << ", p3.y = " << p3.getY() << endl;
//    return 0;
//}
//
//



















// copy constructor 1
//#include<iostream>
//using namespace std;
//
//class Point
//{
//private:
//    int x, y;
//public:
//    Point(){
//        cout << "default constructor" << endl;
//    }
//    Point(int x1, int y1) { x = x1; y = y1;
//        cout << " parameterized constructor" << endl;
//    }
//
//    // Copy constructor
//    Point(const Point &p1) {
//        cout << " copy constructor called." <<endl;
//     x = p1.x; y = p1.y; }
//
//    int getX()            {  return x; }
//    int getY()            {  return y; }
//    void setX(int x1){x = x1;}
//    void setY(int y1){y = y1;}
//};
//
//int main()
//{
//    Point p1(10, 15); // Normal constructor is called here
//    Point p2 = p1; // Copy constructor is called here
//    Point p3 = p1;
//    Point p4, p5;
//    p4 = p1;
//
//    // Let us access values assigned by constructors
//    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
//    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();
//
//    cout << "\np4.x = " << p4.getX() << ", p4.y = " << p4.getY();
//
//    return 0;
//}



















// copy constructor
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class String
//{
//private:
//	char *s;
//	int size;
//public:
//	String(const char *str = NULL); // constructor
//	~String() { delete [] s; }// destructor
//	//String(const String&); // copy constructor
//	void print() { cout << s << endl; } // Function to print string
//	void change(const char *); // Function to change
//};
//
//String::String(const char *str)
//{
//	size = strlen(str);
//	s = new char[size+1];
//	strcpy(s, str);
//	//cout<<endl << "cp const with *"<<endl;
//}
//
//void String::change(const char *str) // tesla is huge.
//{
//	delete [] s;
//	size = strlen(str);   //14
//	s = new char[size+1];  // 15
//	strcpy(s, str);  // s = str
//}
//
//String::String(const String& old_str)
//{
//	size = old_str.size;
//	s = new char[size+1];
//	strcpy(s, old_str.s);
//	cout<<endl<< "cp const "<<size<<endl;
//}
//
//int main()
//{
//	String str1("1 23 456");  // char*
//	String str2 = str1;   //
//    char *a = "nepal";
//    char *b = a;
//    //cout <<a <<" "<<b<<endl;
//
//    cout<<"b: "<<b<<endl;
//    cout<<"a: "<<a<<endl;
//	str1.print(); // what is printed ?
//	str2.print(); //
//
//	str2.change("Tesla is Huge.");
//
//	str1.print(); // tesla is huge
//	str2.print(); // tesla is huge
//	return 0;
//}















//shallow copy
//
//#include <iostream>
//using namespace std;
//class Demo
//{
//    int a;
//    int b;
//    int *p;
//    public:
//    Demo()
//    {
//        p= new int;
//    }
//    void setdata(int x,int y,int z)
//    {
//        a=x;
//        b=y;
//        *p=z;
//    }
//    void showdata()
//    {
//        std::cout << "value of a is : " <<a<< std::endl;
//        std::cout << "value of b is : " <<b<< std::endl;
//        std::cout << "value of *p is : " <<*p<< std::endl;
//    }
//};
//int main()
//{
//  Demo d1, d3;
//  d1.setdata(4,5,7);
//  Demo d2 = d1;   // default copy constructor call
////  d2.showdata();
////  d2.setdata(444,555,10);
////  d1.showdata();
//  /* normal assignment causes shallow copy as well. */
//  d3 = d2; // normal copy by assignment.
//  d3.setdata(777,888,555);
//  d2.showdata();
//    return 0;
//}






















////Deep Copy
#include <iostream>
using namespace std;
class Demo
{
    public:
    int a;
    int b;
    int *p;

    Demo()
    {
        p=new int;
    }
    Demo(Demo &d)
    {
        a = d.a;
        b = d.b;
        p = new int;  // 4 byte memory alloc
        // p holds address of newly created
        // memory
        *p = *(d.p); //  * ( d. p )
    }
    void setdata(int x,int y,int z)
    {
        a=x;
        b=y;
        *p=z;
    }
    void showdata()
    {
        std::cout << "value of a is : " <<a<< std::endl;
        std::cout << "value of b is : " <<b<< std::endl;
        std::cout << "value of *p is : " <<*p<< std::endl;
    }
};
int main()
{
  Demo d1;
  d1.setdata(4,5,7);
  Demo d2 = d1;  // cc
  d2.showdata();
  d2.setdata(444,444,777);
  d1.showdata();
  return 0;
}
