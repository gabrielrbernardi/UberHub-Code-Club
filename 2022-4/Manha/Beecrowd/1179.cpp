#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vetPares, vetImpares;
    int aux;
    for(int i = 0; i < 15; i++){
        cin >> aux;

        if(aux % 2 == 0){ //eh par
            vetPares.push_back(aux);
        }else{
            vetImpares.push_back(aux);
        }
        if(vetPares.size() == 5){
            for(int j = 0; j < vetPares.size(); j++){
                cout << "par[" << j << "] = " << vetPares.at(j) << endl;
            }
            vetPares.clear();
        }
        if(vetImpares.size() == 5){
            for(int j = 0; j < vetImpares.size(); j++){
                cout << "impar[" << j << "] = " << vetImpares.at(j) << endl;
            }
            vetImpares.clear();
        }
    }
    if(vetImpares.size() > 0){
        for(int i = 0; i < vetImpares.size(); i++){
            cout << "impar[" << i << "] = " << vetImpares.at(i) << endl;
        }
        vetImpares.clear();
    }
    if(vetPares.size() > 0){
        for(int i = 0; i < vetPares.size(); i++){
            cout << "par[" << i << "] = " << vetPares.at(i) << endl;
        }
        vetPares.clear();
    }
}