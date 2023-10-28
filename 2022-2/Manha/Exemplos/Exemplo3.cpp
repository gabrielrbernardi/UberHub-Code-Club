#include<bits/stdc++.h>

using namespace std;

void imprimeFor(){
    for(int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    imprimeFor();
    vector<int> vet;
    vet.push_back(1);
    vet.push_back(2);
    vet.push_back(3);
    for(int i = 0; i < vet.size(); i++) {
        cout << vet.at(i) << " ";
    }
    cout << endl;
}