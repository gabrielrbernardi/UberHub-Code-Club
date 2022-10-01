#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    vet.push_back(2);
    vet.push_back(3);
    vet.push_back(4);
    vet.push_back(1);
    vet.push_back(3);
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
    reverse(vet.begin(), vet.end());
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
    int x = count(vet.begin(), vet.end(), 3);
    cout << x << endl;
}