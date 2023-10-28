#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int qtd, aux;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    reverse(vet.begin(), vet.end());
    for(int i = 0; i < vet.size() - 1; i++){
        cout << vet.at(i) << " ";
    }
    cout << vet.at(vet.size() - 1) << endl;

    reverse(vet.begin(), vet.end());
    for(int i = 0; i < vet.size() - 1; i++){
        cout << vet.at(i) << " ";
    }
    cout << vet.at(vet.size() - 1) << endl;
}
