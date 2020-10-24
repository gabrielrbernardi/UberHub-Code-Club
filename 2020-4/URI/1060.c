#include <stdio.h>

int main(){
    float valorLido;
    int qtdPos = 0;
    for(int i = 0; i < 6; i++){
        scanf("%f", &valorLido);
        if(valorLido > 0){
            qtdPos++;
        }
    }
    printf("%d valores positivos\n", qtdPos);
}