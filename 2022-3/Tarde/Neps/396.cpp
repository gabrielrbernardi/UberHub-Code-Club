#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet, vetIndices;
    int aux, busca;

    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    cin >> busca;
    for(int i = 0; i < vet.size(); i++){
        if(vet.at(i) == busca){
            vetIndices.push_back(i);
        }
    }
    if(vetIndices.size() == 0){
        cout << "Mia x" << endl;
    }else{
        cout << vetIndices.size() << endl;
        for(int i = 0; i < vetIndices.size(); i++){
            cout << vetIndices.at(i) << " ";
        }
    }
}