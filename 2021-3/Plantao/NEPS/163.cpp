#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtdFigurinhas, qtdFigurinhasCompradas, aux;
    cin >> qtdFigurinhas;
    cin >> qtdFigurinhasCompradas;
    int vet[qtdFigurinhas];
    for(int i = 0; i < qtdFigurinhas; i++){
        vet[i] = 0;
    }
    for(int i = 0; i < qtdFigurinhasCompradas; i++){
        cin >> aux;
        vet[aux - 1]++;
    }
    int qtdFalta = 0;
    for(int i = 0; i < qtdFigurinhas; i++){
        if(vet[i] == 0){
            qtdFalta++;
        }
    }
    cout << qtdFalta << endl;
}
