#include <bits/stdc++.h>
using namespace std;

// Ler N elementos do teclado
// Mostrar os elementos na tela e mostrar o reverso
// Ler um valor X
// Mostrar a quantidade de vezes que X aparece no vetor

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

    for(int i = 0; i < vet.size(); i++){
        cout << vet[i] << " ";
    }
    cout << endl;

    reverse(vet.begin(), vet.end());

    for(int i = 0; i < vet.size(); i++){
        cout << vet[i] << " ";
    }
    cout << endl;

    int x;
    cin >> x;

    int qtd_vezes = count(vet.begin(), vet.end(), x);
    cout << "A quantidade de vezes que " << x << " aparece no vetor eh: " << qtd_vezes << endl;
}