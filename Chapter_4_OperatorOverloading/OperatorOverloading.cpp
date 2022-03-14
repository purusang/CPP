// Overload ++ when used as prefix

#include <iostream>
#include <cstring>
using namespace std;

class Count {
   private:
    int value;
   public:
    Count() {value = 5;}
    void operator ++ () {
        value = value +1;
    }
    void operator -- () {
        value = --value;
    }
    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;
    ++count1;
    count1.display();  // 6
    --count1;
    count1.display();  //
    --count1;
    count1.display();  //
    return 0;
}













//
//
//
////Factorial Calculation using * overloading.
//#include<iostream>
//using namespace std;
//class Factorial{
//
//public:
//
//    int operator*(int n){
//        int temp = 1;
//        for(int i=n; i>0; i--){
//            temp *= i;
//        }
//        return temp;
//    }
//};
//int main(){
//    Factorial F;
//    string s1 = "Nepal";
//    string s2 = " is Beautiful";
//    cout << F*5 << endl;
////    cout << "Hello There" + "100";
//    cout << s1 + s2;
//
//}
//
//
//
//
//
//
//
//
//
