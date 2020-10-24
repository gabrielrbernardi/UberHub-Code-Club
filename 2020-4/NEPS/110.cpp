#include <bits/stdc++.h>

using namespace std;

int vet[100000];
int main(){
    int valDigitado, qtd;
    vector<int> valoresDigitados;
    cin >> qtd;
    for (int i = 0; i < qtd; i++){
        cin >> valDigitado;
        vet[valDigitado-1]++;
        for (int j = 0; j < valoresDigitados.size(); j++){
            if(valDigitado == valoresDigitados[j]){
                break;
            }
        }
        valoresDigitados.push_back(valDigitado);
    }
}