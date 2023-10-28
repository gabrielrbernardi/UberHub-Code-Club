#include <bits/stdc++.h>
using namespace std;
int main(){
    float mat[12][12];
    int colunaMat;
    char opcao;
    cin >> colunaMat;
    cin >> opcao;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }
    if(opcao == 'S'){
        float soma = 0.0;
        for(int i = 0; i < 12; i++){
            soma = soma + mat[i][colunaMat];
        }
        printf("%.1f\n", soma);
    }else{
        float media, soma = 0.0;
        for(int i = 0; i < 12; i++){
            soma = soma +mat[i][colunaMat];
        }
        media = soma/12;
        printf("%.1f\n", media);
    }

}