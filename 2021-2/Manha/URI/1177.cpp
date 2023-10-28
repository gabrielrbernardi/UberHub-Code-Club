#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[1000];
    int valor;
    cin >> valor;
    for(int i = 0; i < 1000; i++){
        vet[i] = i % valor;
    }
    for(int i = 0; i < 1000; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}