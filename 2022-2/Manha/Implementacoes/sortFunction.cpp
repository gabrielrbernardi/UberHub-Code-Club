#include <bits/stdc++.h>
using namespace std;

void mostraVetor(vector<int> vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vet;
    vet.push_back(23);
    vet.push_back(221);
    vet.push_back(12);
    vet.push_back(-2);
    vet.push_back(0);
    vet.push_back(4);
    mostraVetor(vet);
    // sort(vet.begin(), vet.end());
    sort(vet.begin(), vet.end(), greater<int>());
    mostraVetor(vet);
}
