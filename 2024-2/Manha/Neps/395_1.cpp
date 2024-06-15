#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int busca;
    cin >> busca;
    int qtd_vezes = count(vet.begin(), vet.end(), busca);

    if(qtd_vezes == 0){
        cout << "NAO" << endl;
    }else{
        cout << "SIM" << endl;

    }
}