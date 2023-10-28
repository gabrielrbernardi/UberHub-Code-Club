#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    ///int soma[3] = {0,0,0}; ///pos0 = soma da linha 0, pos1 = soma da linha 1...
    int soma0 = 0, soma1 = 0, soma2 = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }

    for(int coluna = 0; coluna < 3; coluna++){
        soma0 = soma0 + mat[0][coluna];
    }
    for(int coluna = 0; coluna < 3; coluna++){
        soma1 = soma1 + mat[1][coluna];
    }
    for(int coluna = 0; coluna < 3; coluna++){
        soma2 = soma2 + mat[2][coluna];
    }

    cout << "Linha 0: " << soma0 << endl;
    cout << "Linha 1: " << soma1 << endl;
    cout << "Linha 2: " << soma2 << endl;
}
