#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtdElementos;
    scanf("%d", &qtdElementos);
    int vet[qtdElementos];
    for(int i = 0; i < qtdElementos; i++){
        scanf("%d", &vet[i]);
    }
    int soma = 0;
    for(int i = 0; i < qtdElementos; i++){
        soma += vet[i];
    }
    printf("%d\n", soma);
}
