#include <stdio.h>

int main(){
    int comecaAqui;
    scanf("%d", &comecaAqui);
    int i = comecaAqui + 1;
    int terminaAqui = comecaAqui + 10;
    
    while(i < terminaAqui){
        printf("%d ", i);
        i++;
    }
    printf("%d\n", terminaAqui);
}