#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    int soma0 = 0;
    int soma1 = 0;
    int soma2 = 0;
    for(int j = 0; j < 3; j++){
            soma0 += mat[0][j];
    }
    for(int j = 0; j < 3; j++){
            soma1 += mat[1][j];
    }
    for(int j = 0; j < 3; j++){
            soma2 += mat[2][j];
    }

    cout << "Linha 0: " << soma0 << endl;
    cout << "Linha 1: " << soma1 << endl;
    cout << "Linha 2: " << soma2 << endl;
    
    
}