#include <iostream>
using namespace std;

class Car{
    private:   // access specifier : public, private, protected.
        int max_speed;   //4 byte   // 10
        string name;   // not fixed.// Volvo
       int test;
        void driveCar(){
            cout<<"driving car";
        }
    public:
        void dummyDriveCar(){
            driveCar();
        }
        int test1;
        void setData(int ms, string n){
            max_speed =ms;
            name = n;
        }
        void setTest(int t){
            test =t;
        }
        void showData(){
            cout<< max_speed<< " " << name <<" "<< test <<endl;  //10, Volvo
        }
};

int main(){
    Car obj1;  // new object of Car will be created.
//    obj1.max_speed = 10;
//    obj1.name = "Volvo";
    obj1.setData(10, "Volvo");
    obj1.setTest(999);
    obj1.showData();
    obj1.test1 =199823423;
    Car tata;
    tata.setData(80, "TATA");
    //tata.setTest(888);
    tata.showData();
    tata.dummyDriveCar();


//    cout<< obj1.max_speed<< " " << obj1.name <<endl;
//    cout<< tata.max_speed<< " " << tata.name <<endl;
}
