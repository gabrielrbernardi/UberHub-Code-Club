#include <stdio.h>

int main(){
    float qtdPos = 0.0;
    float soma = 0, valorDigitado;
    
    for(int i = 0; i < 6; i++){
        scanf("%f", &valorDigitado);
        if(valorDigitado > 0){
            qtdPos++;
            soma = soma + valorDigitado; //soma += valorDigitado;
        }
    }
    float media = soma/qtdPos;

    printf("%.0f valores positivos\n", qtdPos);
    printf("%.1f\n", media);
}