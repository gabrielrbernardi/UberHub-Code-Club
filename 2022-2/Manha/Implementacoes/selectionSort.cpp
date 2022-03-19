#include <bits/stdc++.h>
using namespace std;

void mostraVetor(vector<int> &vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
}

void selectionSort(vector<int> &vet){
    for (int i = 0; i < vet.size(); i++){
        int indiceMenorValor = i;
        for (int j = i + 1; j < vet.size(); ++j){
            if (vet[j] < vet[indiceMenorValor]){
                indiceMenorValor = j;
            }
        }
        int aux = vet[i];
        vet[i] = vet[indiceMenorValor];
        vet[indiceMenorValor] = aux;
    }
}

int main(){
    vector<int> vet;
    vet.push_back(23);
    vet.push_back(221);
    vet.push_back(12);
    vet.push_back(-2);
    vet.push_back(0);
    vet.push_back(4);
    mostraVetor(vet);
    selectionSort(vet);
    mostraVetor(vet);
}
