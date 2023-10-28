#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[100];
    for(int i = 0; i < 100; i++){
        scanf("%d", vet[i]);
    }
    for(int i = 0; i < 100; i++){
        printf("%d\n", vet[i]);
    }
}
