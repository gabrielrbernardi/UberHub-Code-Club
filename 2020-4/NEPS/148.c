#include <stdio.h>

int main(){
    int b, c;
    scanf("%d %d", &b, &c);
    int soma = b + c;

    if(soma % 2 == 0){ //Par
        printf("Bino\n");
    }else{ //Impar
        printf("Cino\n");
    }
}