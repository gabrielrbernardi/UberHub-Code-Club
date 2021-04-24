#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[100];
    int j = 3;
    for(int i = 0; i < 100; i++, j+=2){
        vet[i] = j;
    }
    for(int i = 0; i < 100; i++){
        cout << vet[i] << endl;
    }
}