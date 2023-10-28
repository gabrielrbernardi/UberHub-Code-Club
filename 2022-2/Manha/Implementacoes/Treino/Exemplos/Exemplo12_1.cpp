#include<bits/stdc++.h>

using namespace std;

void mostraVet(vector<int> vet){
    for (auto i: vet){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vet = {1,4,5,2,7,5,0};
    int maxValue = *max_element(vet.begin(), vet.end());
    vector<int> vetAux(maxValue+1, 0);

    for(int i = 0; i < vet.size(); i++){
        vetAux[vet.at(i)] += 1;
        mostraVet(vetAux);
    }

    for(int i = 0; i < vetAux.size(); i++) {
        cout << vetAux.at(i) << " ";
    }
    cout << endl;
}

