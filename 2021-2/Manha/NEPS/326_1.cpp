#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet1;
    int soma = 0, qtdElem, temp;
    cin >> qtdElem;
    for(int i = 0; i < qtdElem; i++){
        cin >> temp;
        vet1.push_back(temp);
    }
    for(int i = 0; i < qtdElem; i++){
        soma += vet1.at(i);
    }
    cout << soma << endl;
}