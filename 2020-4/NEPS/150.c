#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maior = a;
    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    printf("%d\n", maior);
}