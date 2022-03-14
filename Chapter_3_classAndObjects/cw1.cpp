
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Car{
    string name;
    string model;
    float fuel;
    float mileage;
public:
    Car(){
    }
    Car(string n, string m, float f, float mile){
        name = n;
        model = m;
        fuel = f;
        mileage = mile;
    }
    void setName(string Name){
        name = Name;
    }
    string getName(){
        return name;
    }
    void setModel(string Model){
        model = Model;
    }
    string getModel(){
        return model;
    }
    void setFuel(float Fuel){
        fuel = Fuel;
    }
    float getFuel(){
        return fuel;
    }
    void setMileage(float Mileage){
        mileage = Mileage;
    }
    float getMileage(){
        return mileage;
    }
    void display(){
        cout<< "Name: " << getName() << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Fuel: " << getFuel() << endl;
        cout << "Mileage: " << mileage << endl;
    }
    ~Car(){
    }
};
int main(){

    Car c1("TATA", "800TM",  , 187);
    //cout << c1.getName();
    c1.display();

//    c1.setName("Suzuki");
//    cout << endl << endl << "After setting new name:" << endl;
//    c1.display();
    return 0;
}
