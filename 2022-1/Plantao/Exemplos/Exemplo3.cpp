#include <bits/stdc++.h>

using namespace std;

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){ //seleciona o vetor
        for(int j = 0; j < 3; j++){ // percorre o vetor
            cin >> mat[i][j];
        }
    }

    // mat[0]

    for(int j = 0; j < 3; j++){
        soma = soma + mat[0][j];
    }

    int vet[10];

    for(int j = 9; j >= 0; j--){
        cin >> vet[j];
    }
}