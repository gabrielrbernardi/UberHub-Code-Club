#include <bits/stdc++.h>
using namespace std;

int main() {
    int vet[20], vet1[20];
    for(int i = 0; i < 20; i++){
        cin >> vet[i];
    }
    for(int i = 19, j = 0; i >= 0; i--, j++){
        vet1[i] = vet[j];
    }
    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << vet1[i] << endl;
    }
}
