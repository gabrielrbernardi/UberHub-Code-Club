#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux;

    while(1){ ///loop infinito para ler inumeros valores e coloca-los no vetor
        cin >> aux;
        if(aux == -1){
            break;
        }
        vet.push_back(aux);
    }

    for(int i = 0; i < vet.size(); i++){
        cout << "vet[" << i << "] = " << vet.at(i) << endl;
    }
    reverse(vet.begin(), vet.end());
    cout << endl;
    for(int i = 0; i < vet.size(); i++){
        cout << "vet[" << i << "] = " << vet.at(i) << endl;
    }

    int valorBusca = 10;
    int qtd = count(vet.begin(), vet.end(), valorBusca);
    cout << "A quantidade de vezes que o " << valorBusca << " aparece no vetor eh: " << qtd << endl;
}
