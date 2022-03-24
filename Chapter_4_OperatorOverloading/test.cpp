#include<iostream>
using namespace std;
#define row 4
int main(){
    for(int i =1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout <<"* ";
        }
        cout << endl;
    }
    for(int i=1; i<=10; i++){
        for(int j=1; j<=30; j++){
            if(i == 10 || i == 1 || j== 1 || j==30){
                cout<< "*";
            }
            else cout <<" ";
        }
        cout<<endl;
    }
}
//****
//***
//**
//*
//
