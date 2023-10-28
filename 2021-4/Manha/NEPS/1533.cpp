#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtdLinhas, qtdColunas;
    cin >> qtdLinhas >> qtdColunas;
    int mat[qtdLinhas][qtdColunas];

    for(int i = 0; i < qtdLinhas; i++){
        for(int j = 0; j < qtdColunas; j++){
            cin >> mat[i][j];
        }
    }
    int maior;
    for(int i = 0; i < qtdLinhas; i++){
        for(int j = 0; j < qtdColunas; j++){
            if(i == 0 && j == 0){  ///Atribui o valor da primeira posicao à variavel maior
                maior = mat[i][j];
            }
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }
    int qtdDoses = 0;
    for(int i = 0; i < qtdLinhas; i++){
        for(int j = 0; j < qtdColunas; j++){
            qtdDoses = qtdDoses + (maior - mat[i][j]);
        }
    }
    cout << qtdDoses << endl;
}
