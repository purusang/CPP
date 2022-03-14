#include <iostream>
#include <iomanip>

using namespace std;

int matC[3][3];

void getMatrix(int *arr){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> *(arr + i * 3 + j);
        }
    }
}

void dispMatrix(int *arr){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j){
                cout <<setw(4)<< *(arr + i * 3 + j);
            }
            else{
                cout <<setw(3) << *(arr + i * 3 + j);
            }
        }
        cout << "\n";
    }
}

/*
    | 0  | 1  | 2  | 3  | 4  | 5  |  6 | 7 | 8 |


    MatA:                               MatB:
              j-- col                            j - col;
   i--row   |  0 | 1  |  2 |         k--row  |  0 | 1  |  2 |
            |  3 | 4  | 5  |                 |  3 | 4  | 5  |
            |  6 | 7  | 8  |                 |  6 | 7  | 8  |
*/

void multiplyMatrix(int *matA, int* matB){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                matC[i][j] += (*(matA + i * 3 + k)) * (*(matB + k * 3 + j));
            }
        }
    }
}

int main(){

    // | 0  | 1  | 2  | 3  | 4  | 5  |  6 | 7 | 8 |

    int *matA = new int [3 * 3];
    int *matB = new int [3 * 3];

    getMatrix(matA);
    getMatrix(matB);

    //display the matrix using the function
    cout << "Matrix A:"<<endl;
    dispMatrix(matA);
    cout << "\n" << "Matrix B:"<< endl;
    dispMatrix(matB);

    //multiply
    multiplyMatrix(matA, matB);
    cout <<"\n" << "MatA * MatB: "<< endl;
    dispMatrix((int *)matC);

    delete []matA;
    delete []matB;

    matA = nullptr;
    matB = nullptr;

    return 0;
}
cpp1.txt
Displaying cpp1.txt.
