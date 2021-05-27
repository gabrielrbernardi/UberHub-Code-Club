#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int vet[64];
    vet[0] = 1;
    for(int i = 1; i < 64; i++){
        vet[i] = vet[i-1] * 2;
    }
    int qtd, qtdQuadrados;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> qtdQuadrados;
        unsigned long long int soma = 0;
        for(int j = 0; j < qtdQuadrados; j++){
            soma += vet[j];
        }
        cout << soma/12000 << " kg" << endl;
    }
}
