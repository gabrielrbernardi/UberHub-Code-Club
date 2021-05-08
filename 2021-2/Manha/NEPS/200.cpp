#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[3][3];  ///Declarando Matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]); ///Preenchimento da matriz pelo usuario
        }
    }
    int soma[3] = {0,0,0}; ///Vetor para armazenar a soma dos elementos da coluna da matriz
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            soma[j] += mat[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        printf("Coluna %d: %d\n", i, soma[i]);
    }
}
