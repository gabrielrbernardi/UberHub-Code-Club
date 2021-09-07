#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }

    int soma[8] = {0,0,0,0,0,0,0,0}; ///linha 0, 1 e 2; coluna 0, 1 e 2; diag. principal; diag. secundaria

    soma[0] = mat[0][0] + mat[0][1] + mat[0][2];
    soma[1] = mat[1][0] + mat[1][1] + mat[1][2];
    soma[2] = mat[2][0] + mat[2][1] + mat[2][2];

    soma[3] = mat[0][0] + mat[1][0] + mat[2][0];
    soma[4] = mat[0][1] + mat[1][1] + mat[2][1];
    soma[5] = mat[0][2] + mat[1][2] + mat[2][2];

    soma[6] = mat[0][0] + mat[1][1] + mat[2][2];

    soma[7] = mat[0][2] + mat[1][1] + mat[2][0];

    for(int i = 1; i < 8; i++){
        if(soma[i] == soma[i-1]){
            continue;
        }else{
            cout << "NAO" << endl;
            return 0;
        }
    }
    cout << "SIM" << endl;
}
