#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet = {1,4,5,2,7,5,0};
    int maxValue = *max_element(vet.begin(), vet.end());
    vector<int> vetAux(maxValue+1, 0);

    for(int i = 0; i < vet.size(); i++){
        vetAux[vet.at(i)] += 1;
    }

    for(int i = 0; i < vetAux.size(); i++) {
        cout << vetAux.at(i) << " ";
    }
    cout << endl;
}

