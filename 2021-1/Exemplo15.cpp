#include <bits/stdc++.h>
using namespace std;

int val1, val2, val3;

int operacoes(int opcao){
    if(opcao == 1){
        return val1 + val2;
    }else if(opcao == 2){
        return 3 * val3;
    }else{
        return 0;
    }
}

int main(){
    int opcao;
    cin >> opcao;
    cin >> val1 >> val2;
    cin >> val3;
    cout << "O resultado eh: " << operacoes(opcao) << endl;
}