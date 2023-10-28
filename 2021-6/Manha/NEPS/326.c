#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd, soma = 0;
    scanf("%d", &qtd);
    int vet[qtd];

    for(int i = 0; i < qtd; i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < qtd; i++){
        soma += vet[i]; /// soma = soma + vet[i];
    }

    printf("%d\n", soma);
}