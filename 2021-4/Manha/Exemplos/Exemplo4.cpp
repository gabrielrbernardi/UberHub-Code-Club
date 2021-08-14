#include <bits/stdc++.h>
using namespace std;
/*
    Faz a leitura de 8 valores inteiros
    Mostrar os 8 valores inteiros
    Inverter os 8 valores inteiros
    Mostrar novamente o vetor
*/


int main(){
    vector<int> vet;
    int aux;
    for(int i = 0; i < 8; i++){ ///repeticao para fazer a leitura dos 8 valores
        cin >> aux;
        vet.push_back(aux);
    }
    int i = 0;
    while(i < vet.size()){ ///Mostra os valores do vetor
        cout << "valor na posicao " << i << " eh: " << vet.at(i) << endl;
        i++;
    }
    cout << endl << "invertendo o vetor" << endl << endl;
    reverse(vet.begin(), vet.end());

    i = 0;
    while(i < vet.size()){
        cout << "valor na posicao " << i << " eh: " << vet.at(i) << endl;
        i++;
    }
}
