#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtdEmpresa, qtdInternet;
    cin >> qtdEmpresa >> qtdInternet;

    map<int, int> programasEmpresa, programasInternet, programasParaInstalar;
    //Inserindo os valores nos mapas
    for(int i = 0; i < qtdEmpresa; i++){
        int software, versao;
        cin >> software >> versao;
        programasEmpresa[software] = versao; //utiliza-se dessa forma para que seja possivel inserir os valores e se ja existir, substituir eles, pelo mais recente
    }
    for(int i = 0; i < qtdInternet; i++){
        int software, versao;
        cin >> software >> versao;
        programasInternet[software] = versao;
    }

    //verifica o programa que tem na internet e se ha necessidade de instalar na empresa
    for (auto it: programasInternet){
        if(programasEmpresa[it.first] < it.second){
            programasParaInstalar[it.first] = it.second;
        }
    }

    for(auto it: programasParaInstalar){
        cout << it.first << " " << it.second << endl;
    }
}