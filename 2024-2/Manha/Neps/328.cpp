#include <bits/stdc++.h>
using namespace std;

int main(){
    int aux, n;
    vector<int> vet;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> aux;
        vet.push_back(aux);
    }

    int soma = 0;
    for(int i = 0; i < n; i++){
        soma = soma + vet.at(i);
        // soma = soma + vet[i];
        // soma += vet.at(i);
    }
    double media;
    media = soma / (double) vet.size();

    cout << fixed;
    cout << setprecision(2) << media << endl;
}