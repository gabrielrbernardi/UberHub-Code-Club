#include <bits/stdc++.h>

using namespace std;

int main(){
    int pares[5], impares[5];
    int valor, qtdElemPares = 0, qtdElemImpares = 0;

    for(int i = 0; i < 15; i++){
        cin >> valor;
        if(valor % 2 == 0){ ///verifica se o valor eh par
            pares[qtdElemPares] = valor;
            qtdElemPares++;
        }else{
            impares[qtdElemImpares] = valor;
            qtdElemImpares++;
        }

        if(qtdElemPares == 5){
            for(int j = 0; j < 5; j++){
                cout << "par[" << j << "] = " << pares[j] << endl;
            }
            qtdElemPares = 0;
        }
        if(qtdElemImpares == 5){
            for(int j = 0; j < 5; j++){
                cout << "impar[" << j << "] = " << impares[j] << endl;
            }
            qtdElemImpares = 0;
        }
    }

    for(int j = 0; j < qtdElemImpares; j++){
        cout << "impar[" << j << "] = " << impares[j] << endl;
    }
    for(int j = 0; j < qtdElemPares; j++){
        cout << "par[" << j << "] = " << pares[j] << endl;
    }
}