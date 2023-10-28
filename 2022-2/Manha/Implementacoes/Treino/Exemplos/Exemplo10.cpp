#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet = {1,2,3,4,5,6,7,8,9,10};
    vector<int> vetAux;
    vetAux.push_back(vet.at(0));
    for(int i = 1; i < vet.size(); i++) {
        vetAux.push_back(vetAux.at(i-1) + vet.at(i));
    }
}

