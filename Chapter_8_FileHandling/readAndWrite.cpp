//C++ program to write and read object using read and write function.
// NOTE for concise code we have skipped error checking,
// students must use file error checking syntax for error free code.
#include <iostream>
#include <fstream>

using namespace std;

//class student to read and write student details
class student
{
    private:
        char name[30];
        int age;
    public:
        void getData(void)
        { cout<<"Enter name:"; cin.getline(name,30);
          cout<<"Enter age:"; cin>>age;
        }

        void showData(void)
        {
        cout<<"Name:"<<name<<",Age:"<<age<<endl;
        }
};

int main()
{
    student s;
//    int 12345;
//    ofstream file;
//    //open file in write mode
//    file.open("aaa.txt",ios::out);
//    if(!file)
//    {
//      cout<<"Error in creating file.."<<endl;
//      return 0;
//    }
//    cout<<"\nFile created successfully."<<endl;
//
//    //write into file
//    s.getData();    //read from user
//    file.write((char*)&s,sizeof(s));    //write into file
//
//    file.close();   //close the file
//    cout<<"\nFile saved and closed succesfully."<<endl;

    //re open file in input mode and read data
    //open file1
    ifstream file1;
    //again open file in read mode
    file1.open("aaa.txt",ios::in);
    if(!file1){
        cout<<"Error in opening file..";
        return 0;
    }
    //read data from file
    file1.read((char*)&s,sizeof(s));

    //display data on monitor
    s.showData();
    //close the file
    file1.close();

    return 0;
}



//
//int main(){
////    ofstream file;
////    int a = 1234;
////    //char str[] = "nepal is beautiful";
////    file.open("binary.txt",ios::out| ios::binary);
////    //cout<< (char *)&a;
////    file.write( (char *)&a,    sizeof(int));
////    file.close();
//    ifstream file;
//    int a;
////    char str[50];
//    file.open("binary.txt", ios::in| ios::binary);
//    file.read((char *)&a, sizeof(int));
//    cout<<a;
//    return 0;
//}




//int main(){
//    int counter = 0;
////    ofstream file;
////    file.open("binary.txt",ios::out| ios::binary);
////////    cout<< (char *)&counter;
////    for( counter =0; counter<100; counter++ )
////        file.write((char *)&counter, sizeof(int));
////    file.close();
//    //input section
//    ifstream file;
//    int a;
//    int index;
//    file.open("binary.txt", ios::in| ios::binary);
////    for(int i =0; i<100; i++){
////        file.read((char *)&a, sizeof(int));
////        cout<<a<<" ";
////    }
//    file.seekg(10*sizeof(int));
//    file.read((char *)&a, sizeof(int));
//    cout<<a;
//return 0;
//}
