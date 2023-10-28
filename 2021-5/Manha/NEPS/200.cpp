#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }

    for(int j = 0; j < 3; j++){
        int soma = 0;
        for(int i = 0; i < 3; i++){
            soma += mat[i][j];
        }
        cout << "Coluna " << j << ": " << soma << endl;
    }
}
