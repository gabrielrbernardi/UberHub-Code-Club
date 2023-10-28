#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[3][3];  ///Declarando Matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]); ///Preenchimento da matriz pelo usuario
        }
    }
    int soma[3] = {0,0,0}; ///Vetor para armazenar a soma dos elementos da linha da matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma[i] += mat[i][j]; ///Calculando a soma da linha
        }
    }
    for(int i = 0; i < 3; i++){ ///Repeticao para imprimir o resultado da soma das linhas da matriz
        printf("Linha %d: %d\n", i, soma[i]);
    }
}
