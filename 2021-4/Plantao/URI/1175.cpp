#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[20], aux;

    for(int i = 0; i < 20; i++){
        cin >> vet[i];
    }

    for(int i = 0, j = 19; i < 10; i++, j--){
        aux = vet[j];       ///Copia valor do final e coloca na variavel auxiliar
        vet[j] = vet[i];    ///Copia o valor que está no inicio do vetor e coloca no final do mesmo
        vet[i] = aux;       ///Copia o valor que esta na variavel auxiliar e coloca no inicio do vetor
    }

    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}
