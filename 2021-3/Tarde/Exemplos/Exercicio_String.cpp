#include <bits/stdc++.h>
using namespace std;
/*
    xLeitura de duas frases
    xImprimir as frases separadamente
    xAdicionar um espaco no final da primeira frase
    xJuntar as duas frases
    xImprimir o resultado final da frase 1
    xImprimir o tamanho final da frase
*/
int main(){
    char str1[50], str2[50];
    cout << "Digite a frase 1: ";
    scanf("%[^\n]", str1);  ///Leitura da frase utilizando scanf
    setbuf(stdin, NULL);
    cout << "Digite a frase 2: ";
    scanf("%[^\n]", str2);  ///Leitura da frase utilizando scanf
    cout << "Frase 1: " << str1 << endl; ///Impressao da frase usando cout
    printf("Frase 2: %s\n", str2); ///Impressao da frase usando printf
    strcat(str1, " "); ///Adicionou um espaco ao final da frase
    strcat(str1, str2); ///Juntando as duas frases
    cout << "Frase final: " << str1 << endl;
    cout << "Tamanho: " << strlen(str1) << endl;
}
