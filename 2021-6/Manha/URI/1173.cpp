#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int vet[10];
    vet[0] = x;

    for(int i = 1; i < 10; i++){
        vet[i] = vet[i-1] * 2;
    }

    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}
