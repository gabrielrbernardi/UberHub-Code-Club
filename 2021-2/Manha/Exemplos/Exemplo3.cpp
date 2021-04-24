#include <bits/stdc++.h>
using namespace std;

int main(){
    int x[5];
    int valor = 1;
    for(int i = 0; i < 100; i++, valor++){
        x[i] = valor * 2;
    }
    for(int i = 0; i < 100; i++){
        cout << x[i] << endl;
    }
}