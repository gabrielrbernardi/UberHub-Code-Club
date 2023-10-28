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

        if(qtdPares == 5){
            for(int j = 0; j < 5; j++){
                cout << "par[" << j << "] = " << pares[j] << endl;
            }
            qtdPares = 0;
        }else if(qtdImpares == 5){
            for(int j = 0; j < 5; j++){
                cout << "impar[" << j << "] = " << impares[j] << endl;
            }
            qtdImpares = 0;
        }
    }

    for(int j = 0; j < qtdImpares; j++){
        cout << "impar[" << j << "] = " << impares[j] << endl;
    }
    for(int j = 0; j < qtdPares; j++){
        cout << "par[" << j << "] = " << pares[j] << endl;
    }

}
