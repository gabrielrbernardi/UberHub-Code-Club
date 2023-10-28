#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a; /// %d long int -> %ld
    float b; /// %f double -> %lf
    char c; /// %c

    scanf("%d", &a);
    if(a > 10){
        printf("O valor eh maior que 10\n");
    }else{
        printf("O valor nao eh maior que 10\n");
    }

    for(int i = 0; i < 10; i++){
        printf("O valor de i eh %d\n", i);
    }

    double valor = 2.7565674;

    printf("O valor eh %.2lf\n", valor);
}
