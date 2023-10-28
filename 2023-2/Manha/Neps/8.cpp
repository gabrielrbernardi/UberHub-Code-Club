#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtdMax = 0, aux;
    cin >> qtdMax;
    vector<int> qtdDoces;
    for(int i = 0; i < 3; i++){
        cin >> aux;
        qtdDoces.push_back(aux);
    }
    sort(qtdDoces.begin(), qtdDoces.end());
    int qtdEvolucao = 0;
    int qtdDocesTemp = 0;
    for(auto it: qtdDoces) {
        qtdDocesTemp += it;
        if(qtdDocesTemp > qtdMax){
            break;
        }
        qtdEvolucao++;
    }
    cout << qtdEvolucao << endl;
}