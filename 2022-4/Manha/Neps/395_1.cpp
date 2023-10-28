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
    if(count(vet.begin(), vet.end(), busca) == 0){
        cout << "NAO" << endl;
    }else{
        cout << "SIM" << endl;
    }
}