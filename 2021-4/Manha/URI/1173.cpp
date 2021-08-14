#include <bits/stdc++.h>
using namespace std;

int main(){
    int val;
    cin >> val;
    vector<int> vet;
    vet.push_back(val);
    for(int i = 1; i < 10; i++){
        vet.push_back(vet.at(i-1) * 2);
    }
    for(int i = 0; i < vet.size(); i++){
        cout << "N[" << i << "] = " << vet.at(i) << endl;
    }
}
