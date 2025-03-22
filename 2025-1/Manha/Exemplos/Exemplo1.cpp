#include <iostream>
#include <vector>
#include <string>
using namespace std;


// LER OS VALORES E COLOCAR EM UM VETOR DE TAMANHO 100. A LEITURA
// DEVERA PARAR QUANDO O VALOR DE ENTRADA FOR MENOR QUE 0
int main(){
    int vet[100];
    int valor;
    int cont = 0;
    for(int i = 0; i < 100; i++){
        cin >> valor;
        if(valor < 0){
            break;
        }
        vet[i] = valor;
        cont++;
    }
    cout << cont << endl;
}