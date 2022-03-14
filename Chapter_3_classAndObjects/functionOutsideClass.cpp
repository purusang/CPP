#include <iostream>

using namespace std;

class Box {
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

      // Member functions declaration
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};

// Member functions definitions
double Box::getVolume(void) {
   return length * breadth * height;
}

void Box::setLength( double len ) {
   length = len;
}
void Box::setBreadth( double bre ) {
   breadth = bre;
}
void Box::setHeight( double hei ) {
   height = hei;
}

// Main function for the program
int main() {
    Box* dBox = new Box[5];
    Box Boxes[5];
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
   for(int i =0; i<5; i++){
    // boxes specification
       dBox[i].setLength(6.0+i);
       dBox[i].setBreadth(7.0+i);
       dBox[i].setHeight(5.0+i);
   }
   for(int i =0; i<5; i++){
    // boxes specification
       Boxes[i].setLength(6.0+i);
       Boxes[i].setBreadth(7.0+i);
       Boxes[i].setHeight(5.0+i);
   }
   // box 1 specification
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   for(int i =0; i<5; i++){

       volume = Boxes[i].getVolume();
       cout << "Volume of Box"<<i<<": " << volume <<endl;


       volume = dBox[i].getVolume();
       cout << "Volume of dBox"<<i<<": " << volume <<endl;

   }
    delete [] dBox;
    dBox = nullptr;
   return 0;
}
