#include <bits/stdc++.h>
using namespace std;

vector<int> leVetor(){
    vector<int> vet;
    int aux;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    return vet;
}

void mostraVetor(vector<int> vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vet, vet2;
    vet = leVetor();
    vet2 = leVetor();
    mostraVetor(vet);
    mostraVetor(vet2);
}