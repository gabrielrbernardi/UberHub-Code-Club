#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<float> vet;
    vet.push_back(1.0);
    vet.push_back(1.5);
    vet.push_back(2.3);
    vet.push_back(1.7);
    vet.push_back(-5);
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
    reverse(vet.begin(), vet.end());
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
}