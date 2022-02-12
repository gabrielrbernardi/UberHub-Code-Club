#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtdElem;
    cin >> qtdElem;

    int vet[qtdElem];

    for(int i = 0; i < qtdElem; i++){
        cin >> vet[i];
    }

    //calculando a soma dos elementos do vetor
    int soma = 0;
    for(int i = 0; i < qtdElem; i++){
        soma = soma + vet[i];
    }

    double media = soma / (double) qtdElem;

    printf("%.2lf\n", media);
}