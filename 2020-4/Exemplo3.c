#include <stdio.h>

int main(){
    int opcao;

    do{
        printf(" 1 - Imprime algo\n");
        printf(" 2 - Sair\n");
        printf(">> ");
        scanf("%d", &opcao);
    }while(opcao != 1 && opcao != 2);
    
    if(opcao == 1){
        printf("UberHub\n");
    }else{
        printf("Saindo do programa\n");
    }
}