#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    int soma[3] = {0,0,0}; ///pos0 = soma da coluna 0, pos1 = soma da coluna 1...
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            cin >> mat[i][j];
        }
    }
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            soma[i] = soma[i] + mat[i][j];
        }
    }
    cout << "Coluna 0: " << soma[0] << endl;
    cout << "Coluna 1: " << soma[1] << endl;
    cout << "Coluna 2: " << soma[2] << endl;
}
