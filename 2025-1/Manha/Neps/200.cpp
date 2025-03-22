#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    int coluna0 = 0, coluna1 = 0, coluna2 = 0;

    for(int i = 0; i < 3; i++){
        coluna0 += mat[i][0];
    }

    for(int i = 0; i < 3; i++){
        coluna1 += mat[i][1];
    }

    for(int i = 0; i < 3; i++){
        coluna2 += mat[i][2];
    }
    
    cout << "Coluna 0: " << coluna0 << endl;
    cout << "Coluna 1: " << coluna1 << endl;
    cout << "Coluna 2: " << coluna2 << endl;

}