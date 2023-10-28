//faca a leitura de n valores
//retornar quanto foi o lucro em determinado periodo
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet, somaAcumulada;
    int n, aux;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> aux;
        vet.push_back(aux);
    }
    somaAcumulada.push_back(vet.at(0));
    for(int i = 1; i < vet.size(); i++) {
        somaAcumulada.push_back(vet.at(i) + somaAcumulada.at(i-1));
    }
    for(int i = 0; i < somaAcumulada.size(); i++) {
        cout << somaAcumulada.at(i) << " ";
    }
    cout << endl;
    
    ///comecando a consulta
    
    int qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++) {
        int inicio = 0, fim = 0, resultado = 0;
        cin >> inicio >> fim;
        cout << fim << endl;
        if(inicio == 0){
            resultado = somaAcumulada.at(fim);
        }else{
            resultado = somaAcumulada.at(fim) - somaAcumulada.at(inicio-1);
        }
        cout << "O lucro entre os dias " << inicio << " e " << fim << " foi de " << resultado << endl;
    }
}