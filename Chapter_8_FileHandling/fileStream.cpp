#include<iostream>
#include<fstream>
using namespace std;

int main(){
ifstream input_file;
input_file.open("text100.txt");
char ch;
//if(input_file.fail()){
//    cout<<"failed reading file";
//    return 1;
//}
input_file.get(ch); cout << ch;
input_file.get(ch); cout << ch;
input_file.get(ch); cout << ch;
input_file.get(ch); cout << ch;
input_file.get(ch); cout << ch;
input_file.get(ch); cout << ch;
input_file.get(ch); cout << ch;
input_file.get(ch); cout << ch;

ofstream output_file("text2.txt");

output_file.put('A');
output_file.put('z');
output_file.put('C');
output_file.put('a');
output_file.put('t');


input_file.close();
output_file.close();
return 0;
}



//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main(){
//
//    ifstream input_file("text1.txt");   //read
//    ofstream output_file("text2.txt"); // write
//    char ch;
//
//    while(!input_file.eof()){
//        input_file.get(ch);
//        cout<<ch;
//        output_file.put(ch);
//    }
//
//    input_file.close();
//    output_file.close();
//    return 0;
//}
