#include <bits/stdc++.h>

using namespace std;

int main(){
    double mat[12][12];
    int linhaOperacao;
    string operacao;
    cin >> linhaOperacao;
    cin >> operacao;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }

    double soma = 0.0;

    for(int j = 0; j < 12; j++){
        soma = soma + mat[linhaOperacao][j];
    }

    if(operacao == "S"){
        printf("%.1lf\n", soma);
    }else{
        double media = soma/12.0;
        printf("%.1lf\n", media);
    }
}