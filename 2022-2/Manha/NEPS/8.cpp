#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtdDoces, aux;
    cin >> qtdDoces;
    vector<int> vet;
    for(int i = 0; i < 3; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    sort(vet.begin(), vet.end());
    int qtdEvolucoes = 0, soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma += vet.at(i); //soma = soma + vet.at(i)
        if(soma > qtdDoces){
            break;
        }
        qtdEvolucoes++;
    }
    cout << qtdEvolucoes << endl;
}