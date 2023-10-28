#include <bits/stdc++.h>
using namespace std;

int main(){
    int val, qtd, soma = 0;
    cin >> val;
    do{
        cin >> qtd;
    }while(qtd <= 0);
    for(int i = val; i < val+qtd; i++){
        soma += i;
    }
    cout << soma << endl;
}