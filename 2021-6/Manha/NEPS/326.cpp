#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int qtd, aux;
    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        cin >> aux;
        vet.push_back(aux);
    }

    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma = soma + vet.at(i);
    }

    cout << soma << endl;

}
