#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux;

    while(1){
        cin >> aux;
        if(aux == -1){
            break;
        }
        vet.push_back(aux);
    }
    reverse(vet.begin(), vet.end());
    for(int i = 0; i < vet.size(); i++){
        cout << "X[" << i << "] = " << vet.at(i) << endl;
    }
    cout << "Tamanho do vetor: " << vet.size() << endl;
    cout << "O valor que esta na primeira posicao eh: " << vet.at(0) << endl;
    cout << "O valor que esta na ultima posicao eh: " << vet.at(vet.size() - 1) << endl;
}
