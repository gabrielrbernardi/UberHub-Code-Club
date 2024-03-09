#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[10];
    for(int i = 0; i < 10; i++){
        cin >> vet[i];
    }
    int busca;
    cin >> busca;

    for(int i = 0; i < 10; i++){
        if(vet[i] == busca){
            cout << "SIM" << endl;
            return 0;
        }
    }
    cout << "NAO" << endl;
}