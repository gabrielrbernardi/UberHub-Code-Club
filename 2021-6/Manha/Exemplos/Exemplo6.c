#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
    xLer uma string sem espacos
    xContar a quantidade de vezes que a letra 'e' aparece na string
    xVerificar se a string eh palindromo
    Ler outra string e anexar o conteudo na primeira string
*/

int main(){
    char str[50];
    scanf("%s", str);

    int qtd = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'e'){
            qtd++;
        }
    }

    printf("qtd: %d\n", qtd);
    //==============================================
    ///Verificando se str eh palindromo
    char copia[50];
    for(int i = 0; i < strlen(str); i++){
        copia[(strlen(str)-1)-i] = str[i];
    }
    copia[(strlen(str))] = '\0';

    printf("%s\n", copia);
    if(strcmp(str, copia) == 0){
        printf("eh palindromo\n");
    }else{
        printf("nao eh palindromo\n");
    }

    char str2[50];
    scanf("%s", str2);

    printf("str antes: %s\n", str);
    strcat(str, str2);
    printf("str depois: %s\n", str);
}