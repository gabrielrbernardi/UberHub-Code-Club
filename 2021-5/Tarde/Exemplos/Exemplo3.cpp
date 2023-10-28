#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[5];
    for(int i = 0; i < 5; i++){
        cin >> vet[i];
    }
    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma = soma + vet[i];
    }
    cout << soma << endl;
    for(int i = 0; i < 5; i++){
        cout << vet[i] << endl;
    }
}
