#include <stdio.h>

int main(){
    int opcao;
    printf(" 1 - Continuar\n");
    printf(" 2 - Sair\n");
    printf(">> ");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("Continuando\n");
    }else if(opcao == 2){
        printf("Saindo do programa\n");
    }else{
        printf("Opcao invalida\n");
    }
}