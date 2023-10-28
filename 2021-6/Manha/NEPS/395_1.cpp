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
    for(int i = 0; i < vet.size(); i++){
        if(busca == vet.at(i)){
            cout << "SIM" << endl;
            return 0;
        }
    }
    cout << "NAO" << endl;
}
