#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    int maior;
    ///procurando pelo maior valor da matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == 0 && j == 0){
                maior = mat[0][0];
            }
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] == maior){
                mat[i][j] = (-1);   ///substituindo maior valor da matriz por -1
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << mat[i][j] << " ";
        }
        cout << mat[i][2] << endl; ///imprimindo "manualmente" o ultimo valor da linha da matriz
    }
}
