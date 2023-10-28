#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, aux;
    vector<int> vet;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma = soma + vet.at(i);
    }
    double media;
    media = soma / (double) vet.size();
    cout << media << endl;
}