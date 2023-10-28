#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> notas;
    int temp;
    for(int i = 0; i < 5; i++){
        cin >> temp;
        notas.push_back(temp);
    }
    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma += notas.at(i);
    }
    cout << "Tamanho do vector eh: " << notas.size() << endl;
    cout << "A media das notas eh: " << soma/notas.size() << endl;
}