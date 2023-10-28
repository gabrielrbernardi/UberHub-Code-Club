#include <bits/stdc++.h>

using namespace std;

int main(){
    double mat[12][12];

    int linha;
    char operacao;
    cin >> linha;
    cin >> operacao;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }

    double soma = 0.0;
    for(int j = 0; j < 12; j++){
        soma = soma + mat[linha][j];
    }

    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma/12.0);
    }
}