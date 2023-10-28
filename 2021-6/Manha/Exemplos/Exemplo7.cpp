#include <bits/stdc++.h>
using namespace std;

/*
    xFazer a leitura de 9 valores e coloca-los na matriz 3x3
    Para cada valor lido, armazenar o dobro dele
    Mostrar os valores armazenados
*/

int main(){
    int mat[3][3];

    for(int linha = 0; linha < 3; linha++){ ///eh responsavel por selecionar o vetor a ser preenchido
        for(int coluna = 0; coluna < 3; coluna++){ ///eh responsavel por preencher cada posicao do vetor
            cin >> mat[linha][coluna];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%2d ", mat[i][j]);
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < 3; i++){ ///Seleciona a linha
        for(int j = 0; j < 3; j++){ ///Seleciona a coluna
            mat[i][j] = mat[i][j] * 2;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("%2d", mat[i][2]);
        cout << endl;
    }
}
