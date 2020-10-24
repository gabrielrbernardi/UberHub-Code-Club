#include <stdio.h>

int main(){
    int opcao;
    while(1){
        do{
            printf("MENU\n");
            printf(" 1 - Soma\n");
            printf(" 2 - Subtracao\n");
            printf(" 3 - Multiplicacao\n");
            printf(" 4 - Divisao\n");
            printf(" 5 - Sair\n");
            printf(">> ");
            scanf("%d", &opcao);
        }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5);
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
            return 0;
        }
    }
}