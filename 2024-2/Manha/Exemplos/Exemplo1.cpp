#include <bits/stdc++.h>
using namespace std;
// Ler N elementos do teclado
// Ao digitar -1, encerrar leitura
// Mostrar os elementos e mostrar o quadrado deles na tela e a quantidade de elementos inseridos

int main(){
    vector<int> vet;
    int aux;
    // while(1){
    for(;;){
        cin >> aux;
        if(aux == -1){
            break;
        }
        vet.push_back(aux);
    }
    // Mostra os elementos na tela
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
    // Mostrar o quadrado dos elementos inseridos
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) * vet.at(i) << " ";
    }
    cout << endl;

    cout << "A quantidade de elementos eh: " << vet.size() << endl;
}