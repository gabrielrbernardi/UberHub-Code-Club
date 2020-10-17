#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int presenteBino, qtdMult2 = 0, qtdMult3 = 0, qtdMult4 = 0;

    for(int i = 0; i < N; i++){
        scanf("%d", &presenteBino);
        if(presenteBino % 2 == 0){
            qtdMult2++;
        }
        if(presenteBino % 3 == 0){
            qtdMult3++;
        }
        if(presenteBino % 4 == 0){
            qtdMult4++;
        }
    }
    printf("%d\n", qtdMult2);
    printf("%d\n", qtdMult3);
    printf("%d\n", qtdMult4);
}