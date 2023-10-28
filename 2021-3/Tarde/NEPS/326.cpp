#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int quantidadeElementos, aux;
    cin >> quantidadeElementos;
    for(int i = 0; i < quantidadeElementos; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma += vet.at(i);
    }
    cout << soma << endl;
}
