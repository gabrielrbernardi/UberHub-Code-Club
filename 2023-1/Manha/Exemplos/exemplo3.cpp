#include <bits/stdc++.h>
using namespace std;

//leitura de 9 valores e inserir em uma matriz 3x3
//mostrar essa matriz, no seguinte formato
/*
    1 2 3
    4 5 6
    7 8 9
*/

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << mat[1][2] << endl;
    mat[1][2] = 37;
    cout << mat[1][2] << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}