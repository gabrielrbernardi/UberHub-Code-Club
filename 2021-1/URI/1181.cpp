#include <bits/stdc++.h>
using namespace std;
int main(){
    float mat[12][12];
    int linhaMat;
    string opcao;
    cin >> linhaMat;
    cin >> opcao;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }
    if(opcao == "S"){
        float soma = 0.0;
        for(int j = 0; j < 12; j++){
            soma = soma + mat[linhaMat][j];
        }
        printf("%.1f\n", soma);
    }else{
        float media, soma = 0.0;
        for(int j = 0; j < 12; j++){
            soma = soma + mat[linhaMat][j];
        }
        media = soma/12;
        printf("%.1f\n", media);
    }

}