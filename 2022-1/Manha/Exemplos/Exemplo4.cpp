#include <bits/stdc++.h>

using namespace std;

// fazer a leitura de 5 valores
// imprimir os 5 valores

int main(){
    vector<int> vet;
    int aux;

    for(int i = 0; i < 5; i++){
        cin >> aux;
        vet.push_back(aux);
    }

    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }
}