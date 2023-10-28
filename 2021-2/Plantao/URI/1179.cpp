#include <bits/stdc++.h>

using namespace std;

int main(){
    int par[5], imp[5], aux[15];
    int qtdImp = 0, qtdPar = 0;
    for(int i = 0; i < 15; i++){
        cin >> aux[i];
        if(aux[i] % 2 == 0){
            par[qtdPar] = aux[i];
            qtdPar++;
        }else{
            imp[qtdImp] = aux[i];
            qtdImp++;
        }
        if(qtdPar == 5){
            for(int j = 0; j < 5; j++){
                cout << "par[" << j << "] = " << par[j] << endl;
            }
            qtdPar = 0;
        }else if(qtdImp == 5){
            for(int j = 0; j < 5; j++){
                cout << "impar[" << j << "] = " << imp[j] << endl;
            }
            qtdImp = 0;
        }
    }
    for(int i = 0; i < qtdImp; i++){
        cout << "impar[" << i << "] = " << imp[i] << endl;
    }
    for(int i = 0; i < qtdPar; i++){
        cout << "par[" << i << "] = " << par[i] << endl;
    }
}
