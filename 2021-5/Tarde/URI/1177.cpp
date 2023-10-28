#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int vet[1000];
    for(int i = 0; i < 1000; i++){
        vet[i] = i % x;
    }
    for(int i = 0; i < 1000; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}

