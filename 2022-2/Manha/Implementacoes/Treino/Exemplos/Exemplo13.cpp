#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet = {1,4,5,2,7,5,0};
    int maxValue = *max_element(vet.begin(), vet.end());
    vector<int> vetAux(maxValue+1, 0);

    for(int i = 0; i < vet.size(); i++){
        vetAux[vet.at(i)] += 1;
    }

    vector<int> vetOrdenado;
    for(int i = 0; i < vetAux.size(); i++) {
        for(int j = 0; j < vetAux.at(i); j++) {
            vetOrdenado.push_back(i);
        }
    }

    for(int i = 0; i < vetOrdenado.size(); i++) {
        cout << vetOrdenado.at(i) << " ";
    }
    cout << endl;
}

