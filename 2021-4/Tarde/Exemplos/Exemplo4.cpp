#include <bits/stdc++.h>
using namespace std;
/*
    Ler e inserir no vetor, 10 valores
    Mostrar os valores
    Inverter o vetor
    Mostrar novamente os valores
*/


int main(){
    vector<int> vet;
    int aux;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    for(int i = 0; i < 10; i++){
        cout << "o valor na posicao " << i << " do vetor eh: " << vet.at(i) << endl;
    }
    cout << endl << "Invertendo o vetor" << endl << endl;
    reverse(vet.begin(), vet.end());

    for(int i = 0; i < 10; i++){
        cout << "o valor na posicao " << i << " do vetor eh: " << vet.at(i) << endl;
    }
}
