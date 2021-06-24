#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet, indices;
    int aux;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int menor;
    menor = vet.at(0);
    indices.push_back(0);
    for(int i = 1; i < 10; i++){
        if(vet.at(i) < menor){
            menor = vet.at(i);
            indices.erase(indices.begin(), indices.end()); ///Apagando todo o vetor
            indices.push_back(i);
        }else if(vet.at(i) == menor){
            indices.push_back(i);
        }
    }
    cout << "Menor: " << menor << endl;
    cout << "Ocorrencias: ";
    for(int i = 0; i < indices.size() - 1; i++){
        cout << indices.at(i) << " ";
    }
    cout << indices.at(indices.size() - 1) << endl;
    for(int i = 0; i < 9; i++){ ///Imprime quase todos os elementos
        if(vet.at(i) == menor){
            cout << "-1 ";
        }else{
            cout << vet.at(i) << " ";
        }
    }
    if(vet.at(vet.size() - 1) == menor){  ///Verificacao para imprimir o valor da ultima posicao do vetor
        cout << "-1 " << endl;
    }else{
        cout << vet.at(vet.size() - 1) << endl;
    }

}
