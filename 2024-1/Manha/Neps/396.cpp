#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int busca;
    cin >> busca;
    vector<int> indices;
    for(int i = 0; i < vet.size(); i++){
        if(vet.at(i) == busca){
            indices.push_back(i);
        }
    }
    if(indices.size() == 0){
        cout << "Mia x" << endl;
    }else{
        cout << indices.size() << endl;
        for (int i = 0; i < indices.size(); i++){
            cout << indices.at(i) << " ";
        }
        cout << endl;
    }
}