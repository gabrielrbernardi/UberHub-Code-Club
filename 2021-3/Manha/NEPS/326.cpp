#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int qtdElem, aux;
    cin >> qtdElem;
    for(int i = 0; i < qtdElem; i++){   ///Leitura e insercao dos elementos no vector
        cin >> aux;
        vet.push_back(aux);
    }
    int soma = 0;
    for(int i = 0; i < vet.size(); i++){ ///Calculando a soma dos elementos
        soma += vet.at(i);
    }
    cout << soma << endl;                ///Mostrando a soma
}

