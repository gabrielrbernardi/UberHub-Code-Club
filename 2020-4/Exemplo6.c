#include <stdio.h>

int main(){
    int senhaDigitada, qtdErros = 0, senha = 2018;
    
    while(1){
        scanf("%d", &senhaDigitada);
        if(senhaDigitada == senha){
            printf("%d\n", qtdErros);
            return 0;
        }else{
            qtdErros++;
        }
    }
}