#include <bits/stdc++.h>

using namespace std;

// fazer a leitura de n valores
// parar a leitura quando digitar 15
// imprimir os n valores

int main(){
    vector<int> vet;
    int aux;

    for(;;){ //Loop infinito
        cin >> aux;
        if(aux == 15){
            break;
        }
        vet.push_back(aux);
    }

    cout << endl << endl;

    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }
    cout << "Voce digitou " << vet.size() << " valores" << endl;
}