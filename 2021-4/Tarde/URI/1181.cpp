#include <bits/stdc++.h>

using namespace std;

int main(){
    int linha;
    cin >> linha;
    char operacao;
    cin >> operacao;
    float mat[12][12];
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }
    float soma = 0.0;
    for(int j = 0; j < 12; j++){
        soma = soma + mat[linha][j];
    }
    if(operacao == 'S'){
        printf("%.1f\n", soma);
    }else{
        printf("%.1f\n", soma/12);
    }
}
