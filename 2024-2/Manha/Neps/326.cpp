#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vetor_inteiros;
    int n, aux;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        vetor_inteiros.push_back(aux);
    }

    int soma = 0;
    for(int i = 0; i < vetor_inteiros.size(); i++){
        soma = soma + vetor_inteiros.at(i);
    }
    cout << soma << endl;
}