#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet, vetPares, vetImpares;
    int aux;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    for (int i = 0; i < vet.size(); i++){
        if(vet.at(i) % 2 == 0){ //se for par
            vetPares.push_back(vet.at(i));
        }else{
            vetImpares.push_back(vet.at(i));
        }
    }
    for(int i = 0; i < vetPares.size(); i++){
        cout << vetPares.at(i) << " ";
    }
    cout << endl;
    for(int i = 0; i < vetImpares.size(); i++){
        cout << vetImpares.at(i) << " ";
    }
    cout << endl;
    
}