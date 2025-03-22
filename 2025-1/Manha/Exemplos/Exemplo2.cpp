#include <iostream>
#include <vector>
#include <string>
using namespace std;


// LER OS VALORES E COLOCAR EM UM VETOR DE TAMANHO 100. A LEITURA
// DEVERA PARAR QUANDO O VALOR DE ENTRADA FOR MENOR QUE 0
int main(){
    vector<int> vet;
    int valor;
    for (int i = 0; i < 100; i++){
        cin >> valor;
        if (valor < 0){
            break;
        }
        vet.push_back(valor);
    }
    cout << vet.size() << endl;
}