#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet = {1,2,3,4,5,6,7,8,9,10};
    vector<int> somaAcumulada;
    somaAcumulada.push_back(vet.at(0));

    for(int i = 1; i < vet.size(); i++){
        somaAcumulada.push_back(vet.at(i) + somaAcumulada.at(i-1));
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int inicio, fim;
        cin >> inicio >> fim;
        if(inicio == 0){
            cout << somaAcumulada.at(fim) << endl;
        }else{
            cout << somaAcumulada.at(fim) - somaAcumulada.at(inicio-1) << endl;
        }
    }
}