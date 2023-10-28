#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux, valorBusca;

    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    cin >> valorBusca;
    for(int i = 0; i < vet.size(); i++){
        if(vet.at(i) == valorBusca){
            cout << "SIM" << endl;
            return 0;
        }
    }
    cout << "NAO" << endl;
}
