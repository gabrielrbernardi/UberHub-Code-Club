#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    int somaL0 = mat[0][0] + mat[0][1] + mat[0][2];
    int somaL1 = mat[1][0] + mat[1][1] + mat[1][2];
    int somaL2 = mat[2][0] + mat[2][1] + mat[2][2];

    cout << "Linha 0: " << somaL0 << endl;
    cout << "Linha 1: " << somaL1 << endl;
    cout << "Linha 2: " << somaL2 << endl;
}