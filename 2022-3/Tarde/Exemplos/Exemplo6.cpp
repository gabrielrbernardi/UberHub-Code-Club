#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet;
    int aux;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    
    int qtd = count(vet.begin(), vet.end(), 0);
    cout << qtd << endl;
}