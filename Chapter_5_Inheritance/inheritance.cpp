//#include <bits/stdc++.h>
//using namespace std;
//
//// Base class
//class Parent
//{
//    public:
//      int x,y,z;
//    protected:
//        int p,q,r;
//    private:
//        int a,b,c;
//
//};
//class Child : public Parent
//{
//public:
//    void setpqr(int aa, int b, int c){
//        p=aa, q=b, r=c;
//    }
//    void print(){
//        cout<<"P:" << p<<" Q: "<<q<<"R: "<<r<<endl;
//    }
//
//};
//int main()
//{
//	Child childObj;
//	childObj.setpqr(1,2,3);
//	childObj.print();
////	Parent parentObj;
//// 	//parentObj.p =20;
////
////	// An object of class child has all data members
////	// and member functions of class parent
////	childObj.parent_id = 91;
////	childObj.x =100;
////	cout << "Parent id is: " << childObj.parent_id << '\n';
////	cout << "Child X is : " << childObj.x << '\n';
//
//	return 0;
//}




// Sub class inheriting from Base Class(Parent)












// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
	int x;
	A(){}
	A(int a, int b, int c){x=a, y=b, z=c;}
 	void display(){cout<<"display from class A"<<endl;}
protected:
	int y;
private:
	int z;
};

class B : public A
{
    public:
    int bint;
    B(){}
	B(int a, int b){x=a, y=b;}
	void display(){cout<<"display from class B"<<endl;}

};

int main(){
    A objA(1,2,3);
   // objA.displayA();

    B objB(1,2);
    objB.display();
}
