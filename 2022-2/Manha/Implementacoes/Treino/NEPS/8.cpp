#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux, qtdMax;

    cin >> qtdMax;
    for(int i = 0; i < 3; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    sort(vet.begin(), vet.end());
    
    int soma = 0, qtdEvolucao = 0;

    for(int i = 0; i < vet.size(); i++){
        soma += vet.at(i);
        if(soma > qtdMax){
            break;
        }
        qtdEvolucao++;
    }
    cout << qtdEvolucao << endl;
}
