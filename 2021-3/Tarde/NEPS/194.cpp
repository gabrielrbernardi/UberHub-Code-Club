#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet, par, imp;
    int aux;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    for(int i = 0; i < 10; i++){
        if(vet.at(i) % 2 == 0){ ///Eh par
            par.push_back(vet.at(i));
        }else{
            imp.push_back(vet.at(i));
        }
    }
    for(int i = 0; i < par.size() - 1; i++){
        cout << par.at(i) << " ";
    }
    cout << par.at(par.size() - 1) << endl;

    for(int i = 0; i < imp.size() - 1; i++){
        cout << imp.at(i) << " ";
    }
    cout << imp.at(imp.size() - 1) << endl;
}
