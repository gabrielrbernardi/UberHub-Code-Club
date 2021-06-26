#include <bits/stdc++.h>
using namespace std;
/*
    xLeitura de duas frases
    xImprimir as frases separadamente
    xAdicionar um espaco no final da primeira frase
    xJuntar as duas frases
    xImprimir o resultado final da frase 1
    Imprimir o tamanho final da frase
*/
int main(){
    string str1, str2;
    getline(cin, str1); ///Faz a leitura da frase 1
    getline(cin, str2); ///Faz a leitura da frase 2
    cout << "Frase 1: " << str1 << endl;
    cout << "Frase 2: " << str2 << endl;
    str1.push_back(' '); ///Adiciona um espaco ao final da frase 1
    str1 += str2; ///Juntando as duas frases
    cout << "A frase 1 ficou: " << str1 << endl; ///Imprimindo o resultado da frase 1
    cout << "Tamanho: " << str1.size() << endl;
}
