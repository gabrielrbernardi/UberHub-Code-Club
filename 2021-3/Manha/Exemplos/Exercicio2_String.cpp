#include <bits/stdc++.h>
using namespace std;
/*
    xFazer a leitura de uma frase
    xImprimir a frase digitada
    xAdicionar ponto final "." ao final da frase
    xImprimir a frase modificada
    xComparar se a frase modificada eh igual a "Bom dia."
        Se for igual, mostrar mensagem "sao iguais"
        Se for diferente, mostrar mensagem "sao diferentes"
    xRetornar o tamanho da frase
*/
int main(){
    char str[30]; ///Declarando uma string de tamanho 30
    cout << "Digite a frase: ";
    scanf("%[^\n]", str); ///Fazendo a leitura da frase
    printf("A frase digitada foi: %s\n", str); ///Imprime a frase digitada
    strcat(str, "."); ///Adiciona "." ao final da frase
    cout << "A nova frase eh: " << str << endl; ///Imprime a frase modificada

    char gabarito[30] = "Bom dia.";
    if(strcmp(str, gabarito) == 0){ ///Faz a comparacao das frases
        cout << "sao iguais" << endl;
    }else{
        cout << "sao diferentes" << endl;
    }

    cout << "O tamanho da frase eh: " << strlen(str) << endl;
}
