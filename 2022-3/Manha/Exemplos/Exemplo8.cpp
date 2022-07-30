#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet;
    int aux;
    for(int i = 0; i < 5; i++){
        cin >> aux;
        vet.push_back(aux);
    }

    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }
}