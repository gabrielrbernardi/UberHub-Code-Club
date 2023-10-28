#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[1000];
    int val;
    cin >> val;
    for(int i = 0; i < 1000; i++){
        vet[i] = i % val;
    }
    for(int i = 0; i < 1000; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}