#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd;
    cin >> qtd;
    int vet[qtd];
    for(int i = 0; i < qtd; i++){
        cin >> vet[i];
    }
    for(int i = 1; i < qtd; i++){
        if(vet[i] < vet[i - 1]){
            cout << "Notas invalidas" << endl;
            return 0;
        }
    }
    cout << "Notas validas" << endl;
}
