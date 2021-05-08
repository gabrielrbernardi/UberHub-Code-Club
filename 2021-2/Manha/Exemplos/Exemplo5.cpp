#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[5];  //Vetor de notas
    for(int i = 0; i < 5; i++){
        scanf("%f", &notas[i]);
    }
    float soma = 0;
    for(int i = 0; i < 5; i++){
        if(notas[i] >= 6.0){
            printf("Aluno %d aprovado com nota: %f\n", i, notas[i]);
        }else{
            printf("Aluno %d reprovado com nota: %f\n", i, notas[i]);
        }
        soma = soma + notas[i];
    }
    printf("Media das notas: %.1f\n", soma/5);
}
