#include <bits/stdc++.h>
using namespace std;

void mostraVetor(vector<int> &vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
}


int main(){
    vector<int> vet, vet01;
    int qtd01, qtd02, aux;
    cin >> qtd01;
    for(int i = 0; i < qtd01; i++){
        vet.clear();
        vet01.clear();
        cin >> qtd02;
        for(int j = 0; j < qtd02; j++){
            cin >> aux;
            vet.push_back(aux);
        }
        int qtdIguais = 0;
        vet01 = vet;
        sort(vet01.begin(), vet01.end(), greater<int>());
        mostraVetor(vet);
        mostraVetor(vet01);
        for(int j = 0; j < vet.size(); j++){
            if(vet.at(j) == vet01.at(j)){
                qtdIguais++;
            }
        }
        cout << qtdIguais << endl;
    }
}
