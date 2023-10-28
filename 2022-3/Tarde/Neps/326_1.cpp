#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet;
    int aux, qtdElem;
    cin >> qtdElem;
    int soma = 0;
    for (int i = 0; i < qtdElem; i++){
        cin >> aux;
        soma = soma + aux;
    }

    cout << soma << endl;
}