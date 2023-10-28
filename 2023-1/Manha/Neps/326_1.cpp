#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int vet[N];
    for(int i = 0; i < N; i++){
        cin >> vet[i];
    }
    int soma = 0;
    for(int i = 0; i < N; i++){
        soma = soma + vet[i];
    }
    cout << soma << endl;
}