#include <bits/stdc++.h>
using namespace std;

void mostraVetor(vector<int> &vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
}

int main(){
    int aux;
    vector<int> vet;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    sort(vet.begin(), vet.end());
    mostraVetor(vet);
    sort(vet.begin(), vet.end(), greater<>());
    mostraVetor(vet);
}