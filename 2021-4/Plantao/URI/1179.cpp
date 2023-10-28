#include <bits/stdc++.h>
using namespace std;

int main(){
    int par[5], impar[5];
    int qtdPares = 0, qtdImpares = 0, val;

    for(int i = 0; i < 15; i++){
        cin >> val;

        if(val % 2 == 0){
            par[qtdPares] = val;
            qtdPares++;
        }else{
            impar[qtdImpares] = val;
            qtdImpares++;
        }

        if(qtdPares == 5){
            for(int i = 0; i < qtdPares; i++){
                cout << "par[" << i << "] = " << par[i] << endl;
            }
            qtdPares = 0;
        }
        if(qtdImpares == 5){
            for(int i = 0; i < qtdImpares; i++){
                cout << "impar[" << i << "] = " << impar[i] << endl;
            }
            qtdImpares = 0;
        }
    }
    ///Descarrega vetor de impares
    for(int i = 0; i < qtdImpares; i++){
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    ///Descarrega vetor de pares
    for(int i = 0; i < qtdPares; i++){
        cout << "par[" << i << "] = " << par[i] << endl;
    }
}
