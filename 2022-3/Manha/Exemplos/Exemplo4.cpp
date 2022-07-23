#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[5];
    for(int i = 0; i < 5; i++){
        cin >> vet[i];
    }
    
    for(int i = 0; i < 5; i++){
        cout << "N" << i+1 << ": " << vet[i] << endl;
    }
}