#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int, int> programasEmpresa, programasInstalacao;
    int qtdEmpresa, qtdInternet;
    cin >> qtdEmpresa >> qtdInternet;

    int programa, versao;

    for(int i = 0; i < qtdEmpresa; i++) {
        cin >> programa >> versao;
        programasEmpresa.insert({programa, versao});
    }
    
    for(int i = 0; i < qtdInternet; i++) {
        cin >> programa >> versao;
        if(programasEmpresa.find(programa) == programasEmpresa.end()){
            if(programasInstalacao.find(programa) == programasInstalacao.end()){
                programasInstalacao.insert({programa, versao});
            }else{
                if(programasInstalacao[programa] < versao){
                    programasInstalacao[programa] = versao;
                }
            }
        }else{
            if(programasInstalacao.find(programa) == programasInstalacao.end()){
                programasInstalacao[programa] = versao;
            }else if(programasInstalacao[programa] < versao){
                programasInstalacao[programa] = versao;
            }
            if(programasEmpresa[programa] < versao){
                programasInstalacao[programa] = versao;
            }
        }
    }

    for(auto it: programasInstalacao){
        cout << it.first << " " << it.second << endl;
    }
}