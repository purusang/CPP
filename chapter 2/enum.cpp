#include <iostream>
#define first 60

using namespace std;


int main() {
enum divisions{first_div=60, second_div=50, pass=35, distinction=80};
  float marks;
  while(cin>>marks)
      if(marks>=distinction) {cout<<"Distinction marks."<<endl;}
      else if(marks>=first_div){cout<<"First Division marks."<<endl;}
      else if(marks>=second_div){cout<<"Second Division marks."<<endl;}
      else if(marks>=pass){cout<<"Just pass Division marks."<<endl;}
      else cout<<"Failed"<<endl;
  return 0;
}
