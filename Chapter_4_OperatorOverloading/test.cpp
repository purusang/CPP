//#include<iostream>
//using namespace std;
//#define row 4
//int main(){
//    for(int i =1; i<=row; i++){
//        for(int j=1; j<=i; j++){
//            cout <<"* ";
//        }
//        cout << endl;
//    }
//    for(int i=1; i<=10; i++){
//        for(int j=1; j<=30; j++){
//            if(i == 10 || i == 1 || j== 1 || j==30){
//                cout<< "*";
//            }
//            else cout <<" ";
//        }
//        cout<<endl;
//    }
//}
//****
//***
//**
//*
//
#include<iostream>
using namespace std;
class Mangoes;
class Apples;
class Fruit{


	public:
		int nFruits;
		// error: 'a' hAS incomplete type
		void calculatte(Apples a, Mangoes m){
			cout << "nO OF Fruits: "<< a.napple + m.nmango;
		}



	//	friend void noOfFruits(Apples, Mangoes);

};
class Mangoes: public Fruit{};
class Apples: public Fruit{};
int main(){
    return 0;
}
