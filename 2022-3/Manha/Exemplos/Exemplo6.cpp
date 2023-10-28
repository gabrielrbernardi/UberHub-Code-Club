#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[5];
    int x = 4;
    for(int i = 0; i < 5; i++, x--){
        vet[i] = x;
        //x--;
    }

    for(int i = 0; i < 5; i++){
        cout << vet[i] << endl;
    }
}