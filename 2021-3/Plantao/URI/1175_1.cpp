#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[20], aux;
    for(int i = 0; i < 20; i++){
        cin >> vet[i];
    }
    for(int i = 0; i < 10; i++){
        aux = vet[19-i];
        vet[19-i] = vet[i];
        vet[i] = aux;
        cout << i << " ";
    }
    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
