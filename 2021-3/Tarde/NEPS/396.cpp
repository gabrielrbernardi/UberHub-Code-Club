#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet, indices;
    int aux;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int busca;
    cin >> busca;
    for(int i = 0; i < 10; i++){
        if(busca == vet.at(i)){
            indices.push_back(i);
        }
    }
    if(indices.size() > 0){             ///Encontrou o valor buscado no vector
        cout << indices.size() << endl;
        for(int i = 0; i < indices.size() - 1; i++){
            cout << indices.at(i) << " "; ///Imprime ate a penultima posicao do vector
        }
        cout << indices.at(indices.size() - 1) << endl; ///Imprime a ultima posicao do vector
    }else{                              ///Nao encontrou o valor procurado
        cout << "Mia x" << endl;
    }
}
