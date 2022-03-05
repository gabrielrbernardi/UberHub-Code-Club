#include <bits/stdc++.h>
using namespace std;
/*
    entrada: 1 2 3 4 5 6 7 8 9
    saida: 1 2 3
           4 5 6
           7 8 9
*/

int main(){
    int linhas = 3, colunas = 3;
    int mat[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}