#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    int coluna0 = 0, coluna1 = 0, coluna2 = 0;
    
    for(int j = 0; j < 3; j++){
        coluna0 += mat[j][0];
    }
    for(int j = 0; j < 3; j++){
        coluna1 += mat[j][1];
    }
    for(int j = 0; j < 3; j++){
        coluna2 += mat[j][2];
    }
    cout << "Coluna 0: " << coluna0 << endl;
    cout << "Coluna 1: " << coluna1 << endl;
    cout << "Coluna 2: " << coluna2 << endl;
}