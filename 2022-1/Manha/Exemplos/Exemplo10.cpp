#include <bits/stdc++.h>

using namespace std;

int main(){
    int linhas = 3, colunas = 3;
    int mat[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cin >> mat[i][j];
        }
    }

    for(int j = 0; j < colunas; j++){
        for(int i = 0; i < linhas; i++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}