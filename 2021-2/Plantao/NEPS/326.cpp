#include <bits/stdc++.h>

using namespace std;

int main(){
    int temp, qtdElem, soma = 0;
    vector<int> vet;
    cin >> qtdElem;
    for(int i = 0; i < qtdElem; i++){
        cin >> temp;
        soma += temp;
    }
    cout << soma << endl;
}
