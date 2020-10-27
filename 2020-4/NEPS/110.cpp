#include <bits/stdc++.h>

using namespace std;

long int vet[10000];
int main(){
    int valDigitado, valDigitadoAnt = 0, qtd;
    long int ma = 0;
    cin >> qtd;
    cin >> valDigitado;
    valDigitadoAnt = valDigitado;
    vet[valDigitado-1]+=1;

    for (int i = 1; i < qtd; i++){
        cin >> valDigitado;
        if(valDigitado == valDigitadoAnt){
            vet[valDigitado-1] += 1;
        }else{
            valDigitadoAnt = valDigitado;
            vet[valDigitado-1] = 1;
        }
    }
    for (int i = 0; i < 10000; i++){
        if(vet[i] > ma){
            ma = vet[i];
        }
    }
    cout << ma << endl;
}