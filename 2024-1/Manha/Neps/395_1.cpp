#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[10];
    for(int i = 0; i < 10; i++){
        cin >> vet[i];
    }
    int busca;
    cin >> busca;

    int flag = 0;
    for(int i = 0; i < 10; i++){
        if(vet[i] == busca){
            flag = 1;
        }
    }
    if(flag == 0){
        cout << "NAO" << endl;
    }else {
        cout << "SIM" << endl;
    }
}