#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet;

    //inserindo elementos no vetor
    vet.push_back(3);
    vet.push_back(5);
    vet.push_back(2);
    vet.push_back(2);
    vet.push_back(2);
    vet.push_back(2);
    vet.push_back(2);
    vet.push_back(2);
    vet.push_back(2);
 
    cout << "O elemento que esta na posicao 1 eh: " << vet.at(1) << endl;
    cout << "A quantidade de elementos do vetor eh: " << vet.size() << endl;

    cout << "O valor que esta na 1a posicao do vetor eh: " << vet.at(0) << endl;
    cout << "O valor que esta na ultima posicao do vetor eh: " << vet.at(vet.size() - 1) << endl;

    cout << "O vetor eh: " << endl;
    for (int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;

    reverse(vet.begin(), vet.end());

    for (int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;

    int qtd = count(vet.begin(), vet.end(), 2);
    cout << "A quantidade de vezes que o valor 2 aparece no vetor eh: " << qtd << endl;
}