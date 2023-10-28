
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux;

    for(int i = 0; i < 20; i++){ ///inserindo os 20 valores no vetor
        cin >> aux;
        vet.push_back(aux);
    }

    reverse(vet.begin(), vet.end()); ///invertendo os elementos no vetor

    for(int i = 0; i < vet.size(); i++){
        cout << "N[" << i << "] = " << vet.at(i) << endl;
    }
}
