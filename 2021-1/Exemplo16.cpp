#include <bits/stdc++.h>
using namespace std;

int verificaOpcao(int x){
    if(x > 2 || x < 1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int opcao;
    int val1, val2, val3;
    cin >> opcao;
    if(verificaOpcao(opcao) == 0){
        if(opcao == 1){
            cin >> val1 >> val2;
            cout << "a soma eh: " << val1 + val2 << endl;
        }else{
            cin >> val3;
            cout << "o triplo eh: " << 3 * val3 << endl;
        }
    }else{
        cout << "Entrada invalida" << endl;
    }
}