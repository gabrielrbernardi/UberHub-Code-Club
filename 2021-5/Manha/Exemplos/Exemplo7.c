#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[50] = "UberHub Code Club";
    char str1[50];
//    scanf("%s", str); //Leitura de uma palavra
//    scanf("%[^\n]", str); //Leitura de uma frase
    strcpy(str1, str);
    char str2[50] = "programacao";

    if(strcmp(str, str2) == 0){
        printf("Sao iguais\n");
    }else{
        printf("Sao diferentes\n");
    }
    printf("%s\n", str1);

    strcat(str, str2);
    printf("%s\n", str);

    printf("O tamanho da str1 eh: %d\n", strlen(str));
}
