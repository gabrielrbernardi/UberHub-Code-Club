#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux;
    while(1){
        cin >> aux;
        if(aux == -1){
            break;
        }
        vet.push_back(aux);
    }
    double media;
    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma = soma + vet.at(i);
        // soma += vet.at(i);
    }
    media = soma / (double) vet.size();
    cout << "A media dos elementos eh: " << media << endl;
}