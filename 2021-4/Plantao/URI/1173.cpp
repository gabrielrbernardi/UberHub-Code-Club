#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[10];
    cin >> vet[0];
    for(int i = 1; i < 10; i++){
        vet[i] = 2 * vet[i - 1];
    }
    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}
