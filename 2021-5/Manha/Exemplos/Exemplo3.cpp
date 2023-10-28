#include <bits/stdc++.h>
using namespace std;
/*
    x Ler a nota de 10 alunos
    x calcular a media da nota dos 10 alunos
    x mostra a menor nota
    x mostrar a nota na posicao 5
*/


int main(){
    int notas[10];

    for(int i = 0; i < 10; i++){
        cin >> notas[i];
    }

    int soma = 0;
    for(int i = 0; i < 10; i++){
        soma = soma + notas[i];
    }
    float media = soma / (float) 10;
    cout << "A media eh: " << media << endl;

    int menor = notas[0];
    for(int i = 1; i < 10; i++){
        if(notas[i] < menor){
            menor = notas[i];
        }
    }
    cout << "A menor nota eh: " << menor << endl;

    cout << "A sexta nota digitada eh: " << notas[5] << endl;
}
