#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd, aux;
    vector<int> vet;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int soma = 0;
    double media;
    for(int i = 0; i < qtd; i++){
        soma = soma + vet.at(i);
    }

    media = soma / (double) qtd;
    cout << fixed;
    cout << setprecision(2) << media << endl;
}