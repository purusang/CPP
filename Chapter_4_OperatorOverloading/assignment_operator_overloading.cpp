#include <iostream>
using namespace std;

class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
   public:
      Distance() {feet = 0, inches = 0;}
      Distance(int f, int i) {feet = f, inches = i;}

      Distance( const Distance &d){
        feet = d.feet;
        inches = d.inches;
        cout << "copy constructor called."<< endl;
      }
      // D1 = D2
      void operator = (const Distance &D ) {
         feet = D.feet;  // D1.feet = D2.feet.
         inches = D.inches;
         cout << "operator overloading invoked."<< endl;
      }

      void displayDistance() {cout << "F: " << feet <<  " I:" <<  inches << endl;}

      void operator += (Distance D){
        feet += D.feet;
        inches += D.inches;
        cout << "+= invoked" ;
      }
};

int main() {
   Distance D1(11, 10), D2(5, 11);

   //cout << "First Distance : ";
   //D1.displayDistance();
   //cout << "Second Distance :";
   //D2.displayDistance();

   // use assignment operator
   D1 = D2;
   cout << "First Distance :";
   D1.displayDistance();

//   D1+=D2;
//   D1.displayDistance();

   return 0;
}
