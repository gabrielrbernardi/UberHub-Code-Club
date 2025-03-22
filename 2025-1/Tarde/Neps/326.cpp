#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> vet;
    int quantidade;
    cin >> quantidade;

    for(int i = 0; i < quantidade; i++){
        int aux;
        cin >> aux;
        vet.push_back(aux);
    }

    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma += vet.at(i);
    }

    cout << soma << endl;
}