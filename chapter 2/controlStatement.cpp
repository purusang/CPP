//// custom countdown using while
//#include <iostream>
//using namespace std;
//
//int main ()
//{
//  int n=1;
//
//  while (n>0) {   // 0>0  ,, 0==0
//    cin>>n;
//    cout <<"You Entered: "<< n<<endl;
//  }
//
//  cout << "end of program!\n";
//}
















//// echo machine
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main ()
//{
//  string str;
//  do {
//    cout << "Enter text: ";
//    getline (cin,str);
//    cout << "You entered: " << str << '\n';
//  } while (str != "goodbye");
//}

















//// countdown using a for loop
//#include <iostream>
//using namespace std;
//
//int main ()
//{
//  for (int n=10; n>0; n--) {
//    cout << n << ", ";
//  }
//  cout << "liftoff!\n";
//}













// range-based for loop
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main ()
//{
//int s;
////
////    while ( s < 100 ) {   // while not end of file.  ctrl + c
////         cin >> s;
////         cout << s << endl;
////    }
////int counter =1;
//    for( int i=0 ; i < lengt_ofarr ; i++){
//        cout<<arr[i]<<endl;
//    }
//
//  string str {"Hello!"};
//  int arr[] ={1,2,3,4,5,6,7,8,9};
////  for (char c : str)
////  {
////    cout  << c<<endl ;
////  }
////  cout<<endl<<endl;
//  for (int i : arr)    //  i = 1 , i=2, i=9
//  {
//    cout <<i <<endl;
//  }
//  cout << '\n';
//}








//
//
//
//
//
//
//
//// Program to build a simple calculator using switch Statement
//#include <iostream>
//using namespace std;
//
//int main() {
//    char oper;
//    float num1, num2;
//    int counter =1;
//    for(; counter<=10 ; counter++){
//        cout << endl<<"Enter an operator (+, -, *, /): ";
//        cin >> oper;
//        cout << "Enter two numbers: " << endl;
//        cin >> num1 >> num2;  // num1 + num2, num1-num2, num1*num2
//
//        switch (oper) { // is not a loop , it it similar to else if
//            case '+':
//                cout << num1 << " + " << num2 << " = " << num1 + num2;
//                break;
//            case '-':
//                cout << num1 << " - " << num2 << " = " << num1 - num2;
//                break;
//            case '*':
//                cout << num1 << " * " << num2 << " = " << num1 * num2;
//                break;
//            case '/':
//                cout << num1 << " / " << num2 << " = " << num1 / num2;
//                break;
//            default:
//                // operator is doesn't match any case constant (+, -, *, /)
//                cout << "Error! The operator is not correct";
//                break;
//        }
//    }
//    cout<<endl<<" after switch"<<endl;
//    return 0;
//}
//








//
//
//
//
//#include<iostream>
//using namespace std;
//void securityCheck(){
//    cout<<"Security Check performed."<<endl;
//}
//
//int main(){
//    char morePeople = 'y';
//    string name = "";
//    while (morePeople == 'y'){
//        cout<<"Enter name of a visitor."<<endl;
//        cin>>name;  // ram
//        if(name == "VIP"){
//            continue;    // skip the following line of code.
//        }
//        securityCheck();
//        cout<<"Is there more people entering"<<endl;
//        cin>>morePeople;
//    }
//}


//#include<iostream>
//using namespace std;
//int main(){
//    int marks;
//    cin>>marks;
//    if(marks > 60){
//        cout<<"Good";
//    }
//    else if(marks >=50){
//        cout<<"Okay";
//    }
//    else{
//        cout<<"Not Good";
//    }
//    return 1;
//}


//
//
//#include<iostream>
//using namespace std;
//int main(){
//    int marks;
//    int noOfStds =10;
//    int lotOfStudents =0;
//    // you dont want to record marks for students after roll no 5
//    for(int i = 1 ; i <= 10; i++){  // 6
//        if( i > 2) {
//            lotOfStudents = 1;
//            break;   // 6 > 5 is true
//        }
//        cin >> marks;   //5
//        cout<< marks << endl; ///5
//    }
//    cout << "after for loop";
//    cout<< lotOfStudents;
//    return 1;
//}



