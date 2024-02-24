#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int qtd, aux;
    cin >> qtd;
    for (int i = 0; i < qtd; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    double media;
    int soma = 0;
    for (int i = 0; i < qtd; i++){
        soma = soma + vet.at(i);
    }
    media = (double) soma / vet.size();

    cout << fixed;
    cout << setprecision(2) << media << endl;
}