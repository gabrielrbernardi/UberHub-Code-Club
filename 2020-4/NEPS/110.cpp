#include <bits/stdc++.h>

using namespace std;

long int vet[100000];
int main(){
    int valDigitado, qtd, status = -1, ma = 0;
    cin >> qtd;
    for (int i = 0; i < qtd; i++){
        cin >> valDigitado;
        vet[valDigitado-1]++;
    }
    cout << 1 << endl;
    for (int i = 0; i < 1000000; i++){
        if(vet[i] > ma){
            cout << 2 << endl;
            ma = vet[i];
        }
    }
    cout << ma << endl;
}