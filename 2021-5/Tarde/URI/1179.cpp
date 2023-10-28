#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet, impares, pares;
    int aux;

    for(int i = 0; i < 15; i++){
        cin >> aux;
        vet.push_back(aux);
    }

    for(int i = 0; i < vet.size(); i++){
        if(vet.at(i) % 2 == 0){
            pares.push_back(vet.at(i));
        }else{
            impares.push_back(vet.at(i));
        }

        if(pares.size() == 5){
            for(int j = 0; j < 5; j++){
                cout << "par[" << j << "] = " << pares.at(j) << endl;
            }
            pares.erase(pares.begin(), pares.end());
        }
        if(impares.size() == 5){
            for(int j = 0; j < 5; j++){
                cout << "impar[" << j << "] = " << impares.at(j) << endl;
            }
            impares.erase(impares.begin(), impares.end());
        }
    }

    for(int j = 0; j < impares.size(); j++){
        cout << "impar[" << j << "] = " << impares.at(j) << endl;
    }
    for(int j = 0; j < pares.size(); j++){
        cout << "par[" << j << "] = " << pares.at(j) << endl;
    }

}

