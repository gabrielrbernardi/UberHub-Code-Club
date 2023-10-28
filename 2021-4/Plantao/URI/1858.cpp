#include <bits/stdc++.h>
using namespace std;

int main() {
    int qtd, aux;
    cin >> qtd;
    vector<int> vet;

    for(int i = 0; i < qtd; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int menor, posMenor;
    menor = vet.at(0);
    posMenor = 0;
    for(int i = 1; i < vet.size(); i++){
        if(vet.at(i) < menor){
            menor = vet.at(i);
            posMenor = i;
        }
    }
    cout << posMenor+1 << endl;
}
