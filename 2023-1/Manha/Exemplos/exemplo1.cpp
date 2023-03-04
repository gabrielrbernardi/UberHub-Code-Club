#include <bits/stdc++.h>
using namespace std;
//ler um valor N
//inserir N valores em um vetor
//mostrar os valores que estao no vetor
//retornar o valor que esta na ultima posicao do vetor
//retornar o vetor inverso
//retornar a quantidade de vezes que o valor X aparece no vetor

int main(){
    int N, aux;
    vector<int> vet;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }
    cout << "O valor que esta na ultima posicao do vetor eh: " << vet.at(vet.size() - 1) << endl;
    reverse(vet.begin(), vet.end());
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }
    int busca;
    cin >> busca;
    cout << "A quantidade de vezes que " << busca << " aparece no vetor eh " << count(vet.begin(), vet.end(), busca) << endl;
}