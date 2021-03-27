#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int temp;
    for(int i = 0; i < 5; i++){
        cin >> temp;
        vet.push_back(temp);
    }
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }
}