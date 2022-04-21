#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet;
    int qtd, aux;
    cin >> qtd;
    for(int i = 0; i < qtd; i++) {
        cin >> aux;
        vet.push_back(aux);
    }
    int maiorElemento = *max_element(vet.begin(), vet.end());
    vector<int> vetorContador(maiorElemento+1, 0);

    for(int i = 0; i < vet.size(); i++) {
        vetorContador[vet.at(i)] += 1;
    }
    
    vector<int> vetorOrdenado;
    for(int i = 0; i < vetorContador.size(); i++){
        for(int j = 0; j < vetorContador.at(i); j++){
            vetorOrdenado.push_back(i);
        }
    }
    
    for(int i = 0; i < vetorOrdenado.size(); i++) {
        cout << vetorOrdenado.at(i) << " ";
    }
    cout << endl;
}