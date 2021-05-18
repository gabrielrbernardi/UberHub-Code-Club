#include <bits/stdc++.h>

using namespace std;

int main(){
    float mat[12][12];
    int L;
    string operacao; //Pode ser M ou S
    cin >> L;
    cin >> operacao;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }
    float soma = 0.0;
    for(int j = 0; j < 12; j++){
        soma += mat[L][j];
    }
    if(operacao == "S"){
        printf("%.1f\n", soma);      ///Mostra a soma
    }else{
        printf("%.1f\n", soma/12.0); ///Calcula e mostra a média
    }
}
