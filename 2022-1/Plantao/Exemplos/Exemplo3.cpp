#include <bits/stdc++.h>

using namespace std;

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){ //seleciona o vetor
        for(int j = 0; j < 3; j++){ // percorre o vetor
            cin >> mat[i][j];
        }
    }

    int vet[10];

    for(int i = 9; i >= 0; i--){
        cin >> vet[i];
    }
}