#include <bits/stdc++.h>
using namespace std;
/*
    1 2 3 4 5 6 7 8 9
    1 2 3
    4 5 6
    7 8 9
*/


int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){  ///Percorre as linhas da matriz
        for(int j = 0; j < 3; j++){ ///Percorre as colunas da matriz
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < 3; i++){  ///Percorre as linhas da matriz
        for(int j = 0; j < 3; j++){ ///Percorre as colunas da matriz
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
