#include <bits/stdc++.h>
using namespace std;
int main(){
    int vet[10];
    for(int i = 0; i < 10; i++){
        cin >> vet[i];
    }
    vector<int> par;
    vector<int> impar;
    for(int i = 0; i < 10; i++){
        if(vet[i] % 2 == 0){
            par.push_back(vet[i]);
        }else{
            impar.push_back(vet[i]);
        }
    }
    for(int i = 0; i < par.size()-1; i++){
        cout << par.at(i) << " ";
    }
    cout << par.at(par.size()-1) << endl;

    for(int i = 0; i < impar.size()-1; i++){
        cout << impar.at(i) << " ";
    }
    cout << impar.at(impar.size()-1) << endl;
}