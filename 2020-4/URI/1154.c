#include <stdio.h>

int main(){
    int soma = 0, idade;
    float media, cont = 0.0;
    while(1){
        scanf("%d", &idade);
        if(idade < 0){
            break;
        }else{
            soma += idade;
            cont += 1.0;
        }
    }
    media = soma / cont;
    printf("%.2f\n", media);
}