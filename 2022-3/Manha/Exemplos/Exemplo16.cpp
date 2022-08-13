#include <bits/stdc++.h>
using namespace std;

vector<int> lerVetor(){
    vector<int> vetInt;
    int aux;
    for(int i = 0; i < 5; i++){
        cin >> aux;
        vetInt.push_back(aux);
    }
    return vetInt;
}

void mostraVet(vector<int> vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }
}

//Ler 5 valores, mostrar vetor, alterar um valor e mostrar vetor
int main(){
    vector<int> vet = lerVetor();
    mostraVet(vet);
    vet[2] = 10000;
    mostraVet(vet);
}