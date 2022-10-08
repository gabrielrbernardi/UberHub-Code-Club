#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[100000];
    int aux, i = 0;

    while(1){
        cin >> aux;
        if(aux == -1){
            break;
        }
        vet[i] = aux;
        i++;
    }

    int soma = 0;

    for (int j = 0; j < i; j++){
        soma = soma + vet[j];        
    }
    cout << soma << endl;
    cout << "a qtd de elementos eh: " << i << endl;
}