#include <bits/stdc++.h>
using namespace std;
#define TAM 3

int main(){
    vector<vector<int>> vetDeVet;
    vector<int> vet;
    int aux, cont = 0;

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            cin >> aux;
            vet.push_back(aux);
        }
        vetDeVet.push_back(vet);
    }

    for(int i = 0; i < vetDeVet.size(); i++){
        cont = cont + count(vetDeVet.at(i).begin(), vetDeVet.at(i).end(), 2);
    }

    cout << cont << endl;
}
