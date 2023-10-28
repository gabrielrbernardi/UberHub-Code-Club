#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;
    cin >> qtd;
    int vet[qtd];
    for(int i = 0; i < qtd; i++){
        cin >> vet[i];
    }
    for(int i = 0; i < qtd - 1; i++){
        cout << vet[i] << " ";
    }
    cout << vet[qtd-1] << endl;
    int posicao, novoValor;
    while(1){
        cin >> posicao;
        if(posicao == -1){
            break;
        }
        cin >> novoValor;
        vet[posicao] = novoValor;
        ///imprimindo o estado atual do vetor
        for(int i = 0; i < qtd - 1; i++){
            cout << vet[i] << " ";
        }
        cout << vet[qtd-1] << endl;
    }
    cout << "Vetor Final: ";
    for(int i = 0; i < qtd - 1; i++){
        cout << vet[i] << " ";
    }
    cout << vet[qtd-1] << endl;

}
