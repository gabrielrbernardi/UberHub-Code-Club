#include <bits/stdc++.h>
using namespace std;
/*
Faca a leitura de 7 elementos
Mostrar o tamanho do vetor
Mostrar os elementos na tela
Inverter os elementos do vetor
Contar a quantidade de vezes que um valor x aparece no vetor
*/

int main(){
    int qtd = 7;
    int vet[qtd], tam = 0;
    for(int i = 0; i < qtd; i++){ //fazendo a leitura dos elementos do vetor
        cin >> vet[i];
        tam++;
    }
    cout << "O tamanho do vetor eh " << tam << endl;

    for(int i = 0; i < qtd; i++){ //mostrando os elementos na tela
        cout << vet[i] << " ";
    }
    cout << endl;

    int vet_invertido[qtd];
    tam--;
    for(int i = 0; i < qtd; i++){
        vet_invertido[tam - i] = vet[i];
    }

    for(int i = 0; i < qtd; i++){ //mostrando os elementos na tela
        cout << vet_invertido[i] << " ";
    }
    cout << endl;

    int aux;
    int qtd_limite = qtd / 2;
    for(int i = 0; i < qtd_limite; i++){
        aux = vet[i];
        vet[i] = vet[tam - i];
        vet[tam - i] = aux;
    }

    for(int i = 0; i < qtd; i++){ //mostrando os elementos na tela
        cout << vet[i] << " ";
    }
    cout << endl;

    int qtd_vezes = 0;
    for(int i = 0; i < qtd; i++){
        if(vet[i] == 3){
            qtd_vezes++;
        }
    }
    cout << "a quantidade de vezes que 3 apareceu eh " << qtd_vezes << endl;

    for(int i = tam; i >= 0; i--){
        cout << vet[i] << " ";
    }
    cout << endl;
}