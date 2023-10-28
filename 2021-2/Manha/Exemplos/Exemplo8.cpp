#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet1;
    for(int i = 0; i < 5; i++){
        vet1.push_back(i);
    }
    reverse(vet1.begin(), vet1.end()); //Inverte o vetor
    for(int i = 0; i < vet1.size(); i++){
        cout << vet1.at(i) << endl;
    }
}