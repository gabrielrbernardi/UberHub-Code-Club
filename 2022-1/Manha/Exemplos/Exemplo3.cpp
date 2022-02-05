#include <bits/stdc++.h>

using namespace std;

int main(){
    int vet[5];

    // cin >> vet[0];
    // cin >> vet[1];
    // cin >> vet[2];
    // cin >> vet[3];
    // cin >> vet[4];
    // vet[0] = 5;
    // vet[1] = 2;
    // vet[2] = 10;
    // vet[3] = 8;
    // vet[4] = 6;

    for(int i = 0; i < 5; i++){
        cin >> vet[i];
    }
    for(int i = 0; i < 5; i++){
        cout << vet[i] << endl;
    }

    int posicao;
    cout << "Digite a posicao do valor que quer mostrar: ";
    cin >> posicao;
    cout << "O valor que esta na posicao " << posicao << " eh: " << vet[posicao] << endl;
}