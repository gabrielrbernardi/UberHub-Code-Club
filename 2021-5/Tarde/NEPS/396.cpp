#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet, indices;
    int aux, valorBusca;

    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }

    cin >> valorBusca;
    for(int i = 0; i < vet.size(); i++){
        if(vet.at(i) == valorBusca){
            indices.push_back(i);
        }
    }
    if(indices.size() == 0){
        cout << "Mia x" << endl;
    }else{
        cout << indices.size() << endl;
        for(int i = 0; i < indices.size() - 1; i++){
            cout << indices.at(i) << " ";
        }
        cout << indices.at(indices.size() - 1) << endl;
    }
}
