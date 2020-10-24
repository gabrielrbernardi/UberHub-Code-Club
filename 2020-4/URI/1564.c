#include <stdio.h>

int main(){
    int qtdReclamacoes;
    while(scanf("%d", &qtdReclamacoes) != EOF){
        if(qtdReclamacoes == 0){
            printf("vai ter copa!\n");
        }else{
            printf("vai ter duas!\n");
        }
    }
}