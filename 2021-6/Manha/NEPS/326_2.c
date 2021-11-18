#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[10], indices[10];
    int qtdIndices = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }

    int busca;
    scanf("%d", &busca);

    for(int i = 0; i < 10; i++){
        if(busca == vet[i]){
            indices[qtdIndices] = i;
            qtdIndices++;
        }
    }

    if(qtdIndices == 0){
        printf("Mia x\n");
    }else{
        printf("%d\n", qtdIndices);
        for(int i = 0; i < qtdIndices - 1; i++){
            printf("%d ", indices[i]);
        }
        printf("%d\n", indices[qtdIndices - 1]);
    }
}