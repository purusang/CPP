// C++ program to demonstrate the
// making of structure
#include <bits/stdc++.h>
using namespace std;

// Define structure
struct book{
   int pages;
   char * author;
   float price;
};

// Driver Code
int main()
{
//       char test[5]= "hell";
////       test="Helw";
//       cout<<test<<endl;
    // Declaring a Structure
    struct book HarryPotter;
    HarryPotter.pages = 85;
    HarryPotter.author = "J K Rowling";
    HarryPotter.price = 989.45;
    cout << "The value is : "
         << HarryPotter.pages << endl;
    cout << "The value is : "
         << HarryPotter.author << endl;
    cout << "The value is : "
         << HarryPotter.price << endl;
    return 0;
}
