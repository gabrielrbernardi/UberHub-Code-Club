#include <bits/stdc++.h>
using namespace std;

int main(){
   int qtdElem;
   cin >> qtdElem;
   int vet[qtdElem], menorValor, posMenorValor;
// Leitura do primeiro valor
   cin >> vet[0];
   menorValor = vet[0];
   posMenorValor = 0;
// Leitura dos demais valores
   for(int i = 1; i < qtdElem; i++){
        cin >> vet[i];
   }
   for(int i = 0; i < qtdElem; i++){
        if(vet[i] < menorValor){
            menorValor = vet[i];
            posMenorValor = i;
        }
   }
   cout << "Menor valor: " << menorValor << endl;
   cout << "Posicao: " << posMenorValor << endl;
}
