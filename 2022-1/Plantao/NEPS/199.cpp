#include <bits/stdc++.h>

using namespace std;

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    int soma0 = 0, soma1 = 0, soma2 = 0;

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         if(i == 0){
    //             soma0 = soma0 + mat[i][j];
    //         }else if(i == 1){
    //             soma1 = soma1 + mat[i][j];
    //         }else if(i == 2){
    //             soma2 = soma2 + mat[i][j];
    //         }
    //     }
    // }
    
    for(int i = 0; i < 3; i++){
        soma0 = soma0 + mat[0][i];
    }
    for(int cleiton = 0; cleiton < 3; cleiton++){
        soma1 = soma1 + mat[1][cleiton];
    }
    for(int j = 0; j < 3; j++){
        soma2 = soma2 + mat[2][j];
    }

    cout << "Linha 0: " << soma0 << endl;
    cout << "Linha 1: " << soma1 << endl;
    cout << "Linha 2: " << soma2 << endl;
}