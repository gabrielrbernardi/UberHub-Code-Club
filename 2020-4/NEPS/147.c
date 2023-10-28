#include <stdio.h>

int main(){
    float n1, n2;
    scanf("%f %f", &n1, &n2);

    float media;
    media = ((n1*2) + (n2*3))/5.0;
    if (media >= 7.0){
        printf("Aprovado\n");
    }else if(media < 3){
        printf("Reprovado\n");
    }else{
        printf("Final\n");
    }
}