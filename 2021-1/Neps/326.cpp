#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vet;
    int temp, qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> temp;
        vet.push_back(temp);
    }
    int soma = 0;
    for(int i = 0; i < qtd; i++){
        soma = soma + vet.at(i);
    }
    cout << soma << endl;
}