// 1 2 2 3 4 5
// 4 5

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet, auxVet;
    int qtd, aux;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    sort(vet.begin(), vet.end());

    int soma = 0;
    for(int it: vet){
        soma += it;
    }

    double half = soma / 2.0;
    reverse(vet.begin(), vet.end());

    int somaSubset = 0;
    int cont = 0;
    // while(somaSubset > half){
    //     somaSubset = vet.at(cont);
    //     cont++;
    //     auxVet.push_back(vet.at(cont));
    // }
    for (int it : vet){
        if(somaSubset > half){
            break;
        }
        somaSubset += it;
        auxVet.push_back(it);
    }

    for(int it: auxVet){
        cout << it << endl;
    }
}