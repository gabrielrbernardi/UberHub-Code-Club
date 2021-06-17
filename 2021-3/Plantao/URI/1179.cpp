#include <bits/stdc++.h>
using namespace std;

int main(){
    int par[5], imp[5], vet[15];
    int qtdPar = 0, qtdImp = 0;
    for(int i = 0; i < 15; i++){
        cin >> vet[i];
    }
    for(int i = 0; i < 15; i++){
        if(vet[i] % 2 == 0){ ///Eh par
            par[qtdPar] = vet[i];
            qtdPar++;
        }else{
            imp[qtdImp] = vet[i];
            qtdImp++;
        }
        if(qtdPar == 5){
            for(int j = 0; j < 5; j++){
                cout << "par[" << j << "] = " << par[j] << endl;
            }
            qtdPar=0;
        }else if(qtdImp == 5){
            for(int j = 0; j < 5; j++){
                cout << "impar[" << j << "] = " << imp[j] << endl;
            }
            qtdImp=0;
        }
    }
    for(int i = 0; i < qtdImp; i++){
        cout << "impar[" << i << "] = " << imp[i] << endl;
    }
    for(int i = 0; i < qtdPar; i++){
        cout << "par[" << i << "] = " << par[i] << endl;
    }
}
