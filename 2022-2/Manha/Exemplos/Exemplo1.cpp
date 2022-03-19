#include <bits/stdc++.h>
using namespace std;

// Faca um programa em que seja possivel fazer a leitura de n valores e ordena-los de forma crescente e decrescente
// -4 0 3 -32 2000 0 -1000 5
void mostraVetor(vector<int> &vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
}

int main(){
    int n, aux;
    cin >> n;
    vector<int> vet;
    for(int i = 0; i < n; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    cout << "Os valores digitados sao:" << endl;
    mostraVetor(vet);
    cout << "O vetor ordenado de forma crescente eh:" << endl;
    sort(vet.begin(), vet.end());
    mostraVetor(vet);
    cout << "O vetor ordenado de forma decrescente eh:" << endl;
    sort(vet.begin(), vet.end(), greater<int>());
    mostraVetor(vet);
    /// para mostrar um vetor ja ordenado de forma crescente na forma decrescente, fica:
    // for(int i = vet.size()-1; i >= 0; i--){
    //     cout << vet.at(i) << " ";
    // }
    // cout << endl;
}