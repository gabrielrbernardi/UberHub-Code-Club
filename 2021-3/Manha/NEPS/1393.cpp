#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet1, vet2;
    int qtdElem, aux;
    cin >> qtdElem;
    for(int i = 0; i < qtdElem; i++){
        cin >> aux;
        vet1.push_back(aux);
    }
    vet2 = vet1;
    reverse(vet2.begin(), vet2.end()); ///Iverte o vector
    for(int i = 0; i < vet2.size() - 1; i++){
        cout << vet2.at(i) << " ";
    }
    cout << vet2.at(vet2.size() - 1) << endl;

    for(int i = 0; i < vet1.size() - 1; i++){
        cout << vet1.at(i) << " ";
    }
    cout << vet1.at(vet1.size() - 1) << endl;
}

