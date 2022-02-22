#include <iostream>
#define WIDTH 30
#define HEIGHT 10
using namespace std;



int main(void)
{
    // Top Horizontal Line.
    for(int i = 0; i< WIDTH; i++ )
        cout << "*";
    cout << endl<< endl;

    // Left Vertical Line.
    for(int i = 0; i< HEIGHT; i++ )
        cout << "*" << endl;

    cout << endl<< endl;

    // Filled rectangle
    for(int i = 0; i< HEIGHT; i++ ){
        for(int j = 0; j< WIDTH; j++){
            cout<< "*";
        }
        cout << endl;
    }
    cout << endl<< endl;
    // Bottom Horizontal Line.
    for(int i = 0; i< HEIGHT -1; i++) cout << endl;
    for(int i = 0; i< WIDTH; i++ )
        cout << "*";
    cout << endl<< endl;

    // Right Vertical Line.
    for(int i = 0; i< HEIGHT; i++ ){
        for(int j =0; j< WIDTH; j++){
            if(j == WIDTH -1) {
                cout << "*";
                break;
            }
            else{
                cout <<" ";
            }

        }
        cout << endl;
    }
    cout << endl<< endl;


    // Empty Rectangle
    for(int i = 0; i< HEIGHT; i++ ){
        for(int j = 0; j< WIDTH; j++){
            if(i == 0 or i == HEIGHT - 1){
                cout<< "*";
            }
            else {
                    if( j == 0 or j == WIDTH -1){
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }
            }
        }
        cout << endl;
    }
    cout << endl<< endl;


    // Empty Rectangle
    for(int i = 0; i< HEIGHT; i++ ){
        for(int j = 0; j< WIDTH; j++){
            if(i == 0 || i == HEIGHT - 1 || j ==0 || j == WIDTH -1){
                    cout<<"*";
            }
            else cout<< " ";
        }
        cout << endl;
    }
    cout << endl<< endl;

    // Left up triangle
    for(int i = 0; i< HEIGHT; i++ ){
        for(int j = 0; j< WIDTH; j++){
            if (i>=j) {
                    cout << "*";
            }
            else{
                cout<<endl;
                break;
            }
        }
    }

    cout << endl<< endl;


    // Left Diagonal Line.
    for(int i = 0; i< HEIGHT; i++ ){
        for(int j = 0; j< WIDTH; j++){
            if (i==j) {
                    cout << "*"<< endl;
                    break;
            }
            else{
                cout<< " ";
            }
        }
    }
    cout << endl<< endl;


    // Right Diagonal Line.
    for(int i = 0; i< HEIGHT; i++ ){
        for(int j = 0; j< HEIGHT; j++){
            if(i+j == HEIGHT){
                cout<< "*";
                break;
            }
            else cout << " ";
        }
        cout << endl;
    }

    cout << endl << endl<< endl;


    // Right UP Triangle.
    for(int i = 0; i< HEIGHT; i++ ){
        for(int j = 0; j< HEIGHT; j++){
            if(i+j >= HEIGHT){
                cout<< "*";
            }
            else cout << " ";
        }
        cout << endl;
    }

    cout << endl << endl<< endl;
    return 0;
}
