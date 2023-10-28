#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet, indices;
    int aux;

    for(int i = 0; i < 10; i++){ ///inserindo os valores no vetor
        cin >> aux;
        vet.push_back(aux);
    }

    int busca;
    cin >> busca;
    for(int i = 0; i < vet.size(); i++){
        if(busca == vet.at(i)){ ///procurando pelo valor de busca no vetor
            indices.push_back(i); ///inserindo a posicao do valor em que a busca foi encontrada
        }
    }

    if(indices.size() == 0){
        cout << "Mia x" << endl;
    }else{
        cout << indices.size() << endl;
        for(int i = 0; i < indices.size() - 1; i++){  ///imprime os valores do vetor indices, exceto o ultimo valor
            cout << indices.at(i) << " ";
        }
        cout << indices.at(indices.size() - 1) << endl; ///imprime o ultimo valor do vetor de indices
    }
}
