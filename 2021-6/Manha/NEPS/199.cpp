#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }

    int soma[3] = {0,0,0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma[i] = soma[i] + mat[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        cout << "Linha " << i << ": " << soma[i] << endl;;
    }
}
