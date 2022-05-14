#include<iostream>
#include<fstream>
using namespace std;

int main(){

    char character;
    int number = 45;
    int count = 0;
    fstream out_stream;
    ifstream in_stream1;
    ifstream in_stream2;

    //create the file
    out_stream.open("Integers.txt");
    for(count = 1; count<=5; count++){
        out_stream<<number++<< " ";
    }
    out_stream.close();

    //count the integers in the file
    in_stream1.open("Integers.txt");
    count = 0;
    int arr[10];
//
    while(!in_stream1.eof()){
        in_stream1>>number;
        if(in_stream1.eof()) break;
        arr[count] = number;
        count++;
    }
    for(int i =0; i<count; i++){
        cout<<arr[i] << " ";
    }
    in_stream1.close();
    cout<< "There are "<<count<< " integers in the file"<<endl;
    return 0;
}






/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
//#include <iostream>
//
///* fstream header file for ifstream, ofstream,
//fstream classes */
//#include <fstream>
//
//using namespace std;
//
//// Driver Code
//int main()
//{
//	// Creation of ofstream class object
//	ofstream fout;
//	string line;
//
//	// by default ios::out mode, automatically deletes
//	// the content of file. To append the content, open in ios:app
//	// fout.open("sample.txt", ios::app)
//	fout.open("sample.txt");
//
//	while (fout) {	// Execute a loop If file successfully opened
//		// Read a Line from standard input
//		getline(cin, line);
//		// Press -1 to exit
//		if (line == "-1")
//			break;
//
//		// Write line in file
//		fout << line << endl;
//	}
//
//	// Close the File
//	fout.close();
//
//	// Creation of ifstream class object to read the file
//	ifstream fin;
//	// by default open mode = ios::in mode
//	fin.open("sample.txt");
//	// Execute a loop until EOF (End of File)
//	while (fin) {
//		// Read a Line from File
//		getline(fin, line);
//		// Print line in Console
//		cout << line << endl;
//	}
//
//	// Close the file
//	fin.close();
//
//	return 0;
//}















//#include <iostream>
//
///* fstream header file for ifstream, ofstream,
//fstream classes */
//#include <fstream>
//using namespace std;
//int main(){
//    // Create a text string, which is used to output the text file
//    string myText;
//
//    // Read from the text file
//    ifstream MyReadFile("filename.txt");
//
//    // Use a while loop together with the getline() function to read the file line by line
//    while (getline (MyReadFile, myText)) {
//      // Output the text from the file
//      cout << myText;
//    }
//
//    // Close the file
//    MyReadFile.close();
//
//return 0;
//}
