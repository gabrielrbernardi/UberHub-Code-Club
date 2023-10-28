#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet1[10];
    int busca;
    for(int i = 0; i < 10; i++){
        scanf("%d", &vet1[i]);
    }
    scanf("%d", &busca);
    int qtdElementosBusca = 0;
    int vet2[10];
    for(int i = 0; i < 10; i++){
        if(vet1[i] == busca){
            vet2[qtdElementosBusca] = i;
            qtdElementosBusca++;
        }
    }
    if(qtdElementosBusca == 0){
        printf("Mia x\n");
    }else{
        printf("%d\n", qtdElementosBusca);
        for(int i = 0; i < qtdElementosBusca -1; i++){
            printf("%d ", vet2[i]);
        }
        printf("%d\n", vet2[qtdElementosBusca-1]);
    }
}
