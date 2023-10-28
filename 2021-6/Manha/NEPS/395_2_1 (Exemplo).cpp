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
    
    // int qtd = count(vet.begin(), vet.end(), busca);

    // vet = 1,2,3,3,3,3,4,5,6
    // busca = 3
    // i = 8
    // qtd = 4

    int qtd = 0;
    for(int i = 0; i < vet.size(); i++){
        if(busca == vet.at(i)){
            qtd++; /// qtd = qtd + 1 ou qtd += 1
        }
    }
    
    if(qtd == 0){
        cout << "NAO" << endl;
    }else{
        cout << "SIM" << endl;
    }
}
