#include <stdio.h>

int main(){
    int opcao;
    while(1){ //Loop das operacoes
        while(1){ //Loop do Menu
            printf("MENU\n");
            printf(" 1 - Soma\n");
            printf(" 2 - Subtracao\n");
            printf(" 3 - Multiplicacao\n");
            printf(" 4 - Divisao\n");
            printf(" 5 - Sair\n");
            printf(">> ");
            scanf("%d", &opcao);
            if(opcao >= 1 && opcao <= 5){ // encerra quando opcao maior ou igual a 1 ou menor ou igual a 5 -> [1, 5]
                break;
            }else{
                printf("Opcao invalida\n");
            }
        }
        if(opcao == 1){
            int a, b;
            scanf("%d %d", &a, &b);
            printf("Resultado: %d\n", a+b);
        }else if(opcao == 2){
            int a, b;
            scanf("%d %d", &a, &b);
            printf("Resultado: %d\n", a-b);
        }else if(opcao == 3){
            int a, b;
            scanf("%d %d", &a, &b);
            printf("Resultado: %d\n", a*b);
        }else if(opcao == 4){
            float a, b;
            scanf("%f %f", &a, &b);
            printf("Resultado: %.2f\n", a/b);
        }else if(opcao == 5){
            printf("Encerramento solicitado pelo usuario.\n");
            break;
        }
    }
    printf("Voce esta aqui\n");
}