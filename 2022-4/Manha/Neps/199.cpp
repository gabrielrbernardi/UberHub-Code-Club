#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    int linha0 = 0, linha1 = 0, linha2 = 0;
    
    for(int j = 0; j < 3; j++){
        linha0 += mat[0][j];
    }
    for(int j = 0; j < 3; j++){
        linha1 += mat[1][j];
    }
    for(int j = 0; j < 3; j++){
        linha2 += mat[2][j];
    }
    cout << "Linha 0: " << linha0 << endl;
    cout << "Linha 1: " << linha1 << endl;
    cout << "Linha 2: " << linha2 << endl;
}