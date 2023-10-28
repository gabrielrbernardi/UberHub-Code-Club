#include<bits/stdc++.h>
using namespace std;

/*
    Faça um programa que leia inumeras notas de alunos, mostre-as e calcule a media delas
*/

int main(){
    vector<int> vet;
    int aux;

    while(1){
        cin >> aux;
        if(aux == -1){
            break;
        }
        vet.push_back(aux);
    }
    reverse(vet.begin(), vet.end());
    for(int i = 0; i < vet.size(); i++){
        cout << "X[" << i << "] = " << vet.at(i) << endl;
    }
    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma = soma + vet.at(i);
    }
    double media = soma / (double) vet.size();
    cout << "O tamanho do vetor eh: " << vet.size() << endl;
    cout << "A media eh: " << media << endl;
    cout << "O primeiro elemento eh: " << vet.at(0) << endl;
    cout << "O ultimo elemento eh: " << vet.at(vet.size() - 1) << endl;
}
