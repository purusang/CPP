//#include <iostream>
//#define WIDTH 30
//#define HEIGHT 10
//using namespace std;
//
//
//
//int main(void)
//{
//    // Top Horizontal Line.
//    for(int i = 0; i< WIDTH; i++ )
//        cout << "*";
//    cout << endl<< endl;
//
//    // Left Vertical Line.
//    for(int i = 0; i< HEIGHT; i++ )
//        cout << "*" << endl;
//
//    cout << endl<< endl;
//
//    // Filled rectangle
//    for(int i = 0; i< HEIGHT; i++ ){
//        for(int j = 0; j< WIDTH; j++){
//            cout<< "*";
//        }
//        cout << endl;
//    }
//    cout << endl<< endl;
//    // Bottom Horizontal Line.
//    for(int i = 0; i< HEIGHT -1; i++) cout << endl;
//    for(int i = 0; i< WIDTH; i++ )
//        cout << "*";
//    cout << endl<< endl;
//
//    // Right Vertical Line.
//    for(int i = 0; i< HEIGHT; i++ ){
//        for(int j =0; j< WIDTH; j++){
//            if(j == WIDTH -1) {
//                cout << "*";
//                break;
//            }
//            else{
//                cout <<" ";
//            }
//
//        }
//        cout << endl;
//    }
//    cout << endl<< endl;
//
//
//    // Empty Rectangle
//    for(int i = 0; i< HEIGHT; i++ ){
//        for(int j = 0; j< WIDTH; j++){
//            if(i == 0 or i == HEIGHT - 1){
//                cout<< "*";
//            }
//            else {
//                    if( j == 0 or j == WIDTH -1){
//                        cout << "*";
//                    }
//                    else {
//                        cout << " ";
//                    }
//            }
//        }
//        cout << endl;
//    }
//    cout << endl<< endl;
//
//
//    // Empty Rectangle
//    for(int i = 0; i< HEIGHT; i++ ){
//        for(int j = 0; j< WIDTH; j++){
//            if(i == 0 || i == HEIGHT - 1 || j ==0 || j == WIDTH -1){
//                    cout<<"*";
//            }
//            else cout<< " ";
//        }
//        cout << endl;
//    }
//    cout << endl<< endl;
//
//    // Left up triangle
//    for(int i = 0; i< HEIGHT; i++ ){
//        for(int j = 0; j< WIDTH; j++){
//            if (i>=j) {
//                    cout << "*";
//            }
//            else{
//                cout<<endl;
//                break;
//            }
//        }
//    }
//
//    cout << endl<< endl;
//
//
//    // Left Diagonal Line.
//    for(int i = 0; i< HEIGHT; i++ ){
//        for(int j = 0; j< WIDTH; j++){
//            if (i==j) {
//                    cout << "*"<< endl;
//                    break;
//            }
//            else{
//                cout<< " ";
//            }
//        }
//    }
//    cout << endl<< endl;
//
//
//    // Right Diagonal Line.
//    for(int i = 0; i< HEIGHT; i++ ){
//        for(int j = 0; j< HEIGHT; j++){
//            if(i+j == HEIGHT){
//                cout<< "*";
//                break;
//            }
//            else cout << " ";
//        }
//        cout << endl;
//    }
//
//    cout << endl << endl<< endl;
//
//
//    // Right UP Triangle.
//    for(int i = 0; i< HEIGHT; i++ ){
//        for(int j = 0; j< HEIGHT; j++){
//            if(i+j >= HEIGHT){
//                cout<< "*";
//            }
//            else cout << " ";
//        }
//        cout << endl;
//    }
//
//    cout << endl << endl<< endl;
//    return 0;
//}















#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Car{
    string *name;
    string model;
    float fuel;
    float mileage;
public:
    Car(){
        name = new string;
        *name = "Default Name";
        model = "Default Model";
        fuel = 10.0;
        mileage = 100;
    }
    Car(string n, string m, float f, float mile){
        name = new string;
        *name = n;
        model = m;
        fuel = f;
        mileage = mile;
    }
    Car(const Car& c){
        name = new string;
        *name = *(c.name);
        model = c.model;
        fuel = c.fuel;
        mileage = c.mileage;
    }
    void display(){
        cout<< "Name: " << *name << endl;
        cout << "Model: " << model << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Mileage: " << mileage << endl;
    }
    ~Car(){
        delete name;
    }
};
class Vector{
    float x;
    float y;
    float magnitude;
    float angle;
public:
    Vector(){}
    Vector(float xp, float yp){
        x  = xp;
        y = yp;
        magnitude = sqrt(x*x + y*y);
        angle = atan(y/x);
    }
    //copy constructor
    Vector(const Vector& v){
        x = v.x;
        y = v.y;
        magnitude = v.magnitude;
        angle = v.angle;
    }
    void sum(Vector v){ // v1.sum(v2)
        x = x + v.x;  // v1.x = v1.x + v2.x;
        y = y + v.y; // v1.y = v1.y + v2.y;
        magnitude = sqrt(x*x + y*y);
        angle = atan(y/x);
    }
    //v3 = v1.difference(v2)
    Vector difference(Vector v){
        Vector temp;
        temp.x = x - v.x; // v1.x - v2.x
        temp.y = y - v.y; // v1.y - v2.y
        temp.magnitude = sqrt(temp.x*temp.x + temp.y*temp.y);
        temp.angle = atan(temp.y/temp.x);
        return temp;
    }
    void showVector(){
        cout << x << "i +" << y << "j" << endl;
        cout << "magnitude: " << fixed << setprecision(3) << magnitude << endl << "Angle: " << angle << endl;
    }
};
int main(){
    Vector v1(10,20), v2(10,20);
    v1.showVector();
    v1.sum(v2);
    v1.showVector();
    Vector v3 = v1.difference(v2);
//    v3.showVector();
//    Car c1("TATA", "800TM", 100, 187);
//    c1.display();
//    Car c2 = c1;
}






