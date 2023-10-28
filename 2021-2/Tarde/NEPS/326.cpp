#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int qtdElementos, temp;
    cin >> qtdElementos;
    for(int i = 0; i < qtdElementos; i++){
        cin >> temp;
        vet.push_back(temp);
    }
    int soma = 0;
    for(int i = 0; i < qtdElementos; i++){
        soma += vet.at(i);
    }
    cout << soma << endl;
}