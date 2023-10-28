#include <bits/stdc++.h>
using namespace std;
int main(){
    int qtd;
    cin >> qtd;
    int vet[qtd], som = 0;
    for(int i = 0; i < qtd; i++){
        cin >> vet[i];
    }
    for(int i = 0; i < qtd; i++){
        som += vet[i];
        if(som >= 1000000){
            cout << i+1 << endl;
            break;
        }
    }
}
