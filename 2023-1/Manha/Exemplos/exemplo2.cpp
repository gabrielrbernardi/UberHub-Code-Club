#include <bits/stdc++.h>
using namespace std;

//ler 10 valores inteiros
//mostrar os 10 valores
//calcular a soma dos valores
//trocar o valor que esta na posicao 7 do vetor para o valor 353
//calcular a soma, novamente
//mostrar o vetor na tela

int main(){
    int antonio[10];

    for(int i = 0; i < 10; i++){
        cin >> antonio[i];
    }
    for(int i = 0; i < 10; i++){
        cout << antonio[i] << " ";
    }
    cout << endl;
    int soma = 0;
    for(int i = 0; i < 10; i++){
        soma = soma + antonio[i];
    }
    cout << "A soma dos valores do vetor eh " << soma << endl;
    antonio[7] = 353;
    for(int i = 0; i < 10; i++){
        cout << antonio[i] << " ";
    }
    cout << endl;
    soma = 0;
    for(int i = 0; i < 10; i++){
        soma = soma + antonio[i];
    }
    cout << "A nova soma dos valores do vetor eh " << soma << endl;
    for(int i = 0; i < 10; i++){
        cout << antonio[i] << " ";
    }
    cout << endl;
}