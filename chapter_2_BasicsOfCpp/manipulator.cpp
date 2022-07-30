#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float basic,ta,da,gs;
    basic=10000;
    ta=800;
    da=5000;
    gs=basic+ta+da;
    //setfill, left, right
    cout<<setw(10)<<left<<"Basic"<<basic<<endl
        <<setw(10)<<right<<"TraAl"<<setw(10)<<ta<<endl
        <<setw(10)<<"DaiAl"<<setw(10)<<da<<endl
        <<setw(10)<<"Gross"<<gs<<endl;
//      cout<<"hex and  upper case"<<endl;
//      cout << showbase << hex;
//      cout << uppercase << 77 << '\n';
//      cout << nouppercase << 77 << '\n';

//  int p = 1;
//  int z = 0;
//  int n = -1;
//  cout<< "show pos"<<endl;
//  cout << showpos   << p << '\t' << z << '\t' << n << '\n';
//  cout << noshowpos << p << '\t' << z << '\t' << n << '\n';
    return 0;
}
