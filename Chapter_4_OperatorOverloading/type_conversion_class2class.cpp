#include<iostream>
using namespace std;
class Minute{
    int min;
public:
    Minute(){}
    Minute(int m){min = m;}
    void setMin(int m){min =m;}
    void display(){cout<<"Minute is: "<<min<<endl;}
};
class Time{
    int hr, min;
public:
    Time(){}
    Time(int h, int m){hr = h, min = m;}
    operator Minute(){
        Minute temp;
        temp.setMin(hr*60+min);
        return temp;
    }
    void display(){cout<<"Time is: "<<hr<<":"<<min<<endl;}
};
int main(){
    Minute mObj;
    Time tObj(1,20) ;

    mObj = tObj;
    mObj.display();
    tObj.display();
}












//Method 2
//#include<iostream>
//using namespace std;
//class Car{
//    string model;
//public:
//    Car(){}
//    Car(string s){model = s;}
//    string getModel(){return model;}
//
//};
//class Bike{
//    string company;
//public:
//    Bike(){}
//    Bike(string s){company = s;}
//    Bike(Car c){company = c.getModel();}
//    void display(){cout <<"Bike: " << company<<endl;}
//};
//
//int main(){
//    string s = "hell0";
//    Car c("Mahindra 100");
//    Bike b;
//    b = c;
//    b.display();
//
//}










//    operator Minute(){
//        Minute minTemp;
//        minTemp.setMin(hr *60 + min);
//        return minTemp;
//    }
