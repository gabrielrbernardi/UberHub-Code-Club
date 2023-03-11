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
    for(int i = 0; i < 3; i++){
            soma0 += mat[i][0];
    }
    for(int i = 0; i < 3; i++){
            soma1 += mat[i][1];
    }
    for(int i = 0; i < 3; i++){
            soma2 += mat[i][2];
    }

    cout << "Coluna 0: " << soma0 << endl;
    cout << "Coluna 1: " << soma1 << endl;
    cout << "Coluna 2: " << soma2 << endl;
    
    
}