#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet = {1,2,3,4,5,6,7,8,9,10};
    vector<int> vetAux;
    vetAux.push_back(vet.at(0));
    for(int i = 1; i < vet.size(); i++) {
        vetAux.push_back(vetAux.at(i-1) + vet.at(i));
    }
    for(int i = 0; i < vetAux.size(); i++) {
        cout << vetAux.at(i) << " ";
    }
    cout << endl;
    int l, r, resultado;
    cin >> l >> r;
    if(l == 0){
        resultado = vetAux.at(r);
    }else{
        resultado = vetAux.at(r) - vetAux.at(l-1);
    }
    cout << resultado << endl;
}