#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd, soma = 0, val;
    cin >> qtd;
    for (int i = 0; i < qtd; i++){
        cin >> val;
        soma = soma + val;
    }
    cout << soma << endl;
}