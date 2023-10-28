#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux;
    for(int i = 0; i < 20; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    reverse(vet.begin(), vet.end());
    for(int i = 0; i < vet.size(); i++){
        printf("N[%d] = %d\n", i, vet.at(i));
    }
}

