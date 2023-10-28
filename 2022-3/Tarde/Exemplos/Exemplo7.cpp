#include<bits/stdc++.h>
using namespace std;

void mostraVet(vector<int> vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
}

vector<int> leVetor(vector<int> vet){
    int aux;
    for(int i = 0; i < 5; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    return vet;
}

//ler os valores de um vetor
//mostrar o vetor
//alterar um valor
//mostrar o vetor
int main(){
    vector<int> vet = leVetor();
    mostraVet(vet);
    vet[2] = 1000;
    mostraVet(vet);
}