#include <bits/stdc++.h>
using namespace std;

int main(){
    int tamVet, aux;
    cin >> tamVet;
    vector<int> vet;

    for(int i = 0; i < tamVet; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma = soma + vet.at(i);
    }
    cout << soma << endl;
}
