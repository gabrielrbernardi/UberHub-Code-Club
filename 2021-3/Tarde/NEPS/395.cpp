#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux, busca;
    for(int i = 0; i < 10; i++){  ///Leitura dos 10 valores
        cin >> aux;
        vet.push_back(aux);
    }
    cin >> busca;                 ///Leitura do valor a ser buscado
    for(int i = 0; i < 10; i++){  ///Faz a busca no vetor
        if(busca == vet.at(i)){   ///Se achar o valor que esta sendo buscado, imprime a mensagem
            cout << "SIM" << endl;
            return 0;             ///Encerrar o programa
        }
    }
    cout << "NAO" << endl;
}
