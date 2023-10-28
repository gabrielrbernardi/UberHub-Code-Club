#include <bits/stdc++.h>
using namespace std;

int main(){
    int linhaOperacao;
    char operacao;

    cin >> linhaOperacao;
    cin >> operacao;

    double mat[12][12];

    ///preenchendo a matriz
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }

    ///calculando a soma dos elementos da linha 'linhaOperacao'
    double soma = 0.0;
    for(int j = 0; j < 12; j++){
        soma = soma + mat[linhaOperacao][j];
    }

    ///mostrando os resultados
    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma/12.0);
    }
}
