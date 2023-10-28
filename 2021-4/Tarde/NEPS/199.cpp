#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    int soma[3] = {0,0,0}; ///pos0 -> soma da linha 0, pos1 -> soma da linha 1...
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma[i] = soma[i] + mat[i][j];
        }
    }
    cout << "Linha 0: " << soma[0] << endl;
    cout << "Linha 1: " << soma[1] << endl;
    cout << "Linha 2: " << soma[2] << endl;
}
