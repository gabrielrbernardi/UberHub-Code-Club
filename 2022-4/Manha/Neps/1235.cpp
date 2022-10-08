#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd, aux, busca;
    vector<int> vet;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    cin >> busca;
    if(count(vet.begin(), vet.end(), busca) == 0){
        cout << "nao_pertence" << endl;
    }else{
        cout << "pertence" << endl;
    }
}