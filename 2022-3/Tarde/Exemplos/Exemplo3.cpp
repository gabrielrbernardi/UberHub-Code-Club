#include <bits/stdc++.h>
using namespace std;
//substituir os valores pares por -1
int main(){
    int vet[5];
    for(int i = 0; i < 5; i++){
        cin >> vet[i];
    }

    for(int i = 0; i < 5; i++){
        if(vet[i] % 2 == 0){
            vet[i] = -1;
        }
    }

    for(int i = 0; i < 5; i++){
        cout << vet[i] << endl;
    }
}