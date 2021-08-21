#include <bits/stdc++.h>

using namespace std;

int main(){
    int pares[5], impares[5];
    int qtdPares = 0, qtdImpares = 0, aux;
    for(int i = 0; i < 15; i++){
        cin >> aux;
        if(aux % 2 == 0){
            pares[qtdPares] = aux;
            qtdPares++;
        }else{
            impares[qtdImpares] = aux;
            qtdImpares++;
        }

        if(qtdImpares == 5){
            for(int i = 0; i < qtdImpares; i++){
                cout << "impar[" << i << "] = " << impares[i] << endl;
            }
            qtdImpares = 0;
        }else if(qtdPares == 5){
            for(int i = 0; i < qtdPares; i++){
                cout << "par[" << i << "] = " << pares[i] << endl;
            }
            qtdPares = 0;
        }
    }
    for(int i = 0; i < qtdImpares; i++){
        cout << "impar[" << i << "] = " << impares[i] << endl;
    }
    for(int i = 0; i < qtdPares; i++){
        cout << "par[" << i << "] = " << pares[i] << endl;
    }
}
