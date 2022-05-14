#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){
    ifstream fileHandler;
    fileHandler.open("test.txt");
    if(!fileHandler) return 1;
//    fileHandler.open("test.txt");
    char ch;
    int roll[5];
    char name[5][10];
    string sci[5];
    string math[5];
    string social[5];
    int marks[5][3];
    int i, count =0;
    while(!fileHandler.eof()){
        fileHandler>>roll[count];
        fileHandler>>name[count];
//        fileHandler>>sci[count];
//        fileHandler>>marks[count][0];
//        fileHandler>>math[count];
//        fileHandler>>marks[count][1];
//        fileHandler>>social[count];
//        fileHandler>>marks[count][2];
        count++;
        cout<<"count: "<<count <<endl;
        int i = count;
        cout<<roll[i]<<" "<<setw(10)<<left<<name[i]<<endl;
    }
    for(int i=0; i< count ; i++){
        //cout<<roll[i]<<" "<<setw(10)<<left<<name[i]<<endl;
    }
    fileHandler.close();
return 0;
}
