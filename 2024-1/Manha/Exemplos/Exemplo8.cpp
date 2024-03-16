#include <bits/stdc++.h>
using namespace std;

int le_inteiro(){
    int a;
    cin >> a;
    return a;
}

int soma(int a, int b){
    int soma = a + b;
    return soma;
}

int subtracao(int a, int b){
    return a - b;
}

int multiplicacao(int a, int b){
    return a * b;
}

double divisao(int a, int b){
    double a_convertido = (double) a;
    return a_convertido / b;
}

void mostra_resultado(string texto_resposta, int a){
    cout << texto_resposta << a << endl;
}

void trevo(int opcao_escolhida, int a, int b){
    if(opcao_escolhida == 1){ //SOMA
        mostra_resultado("SOMA = ", soma(a, b));
    }else if(opcao_escolhida == 2){ //SUBTRACAO
        mostra_resultado("DIFERENCA = ", subtracao(a, b));
    }else if(opcao_escolhida == 3){ //MULTIPLICACAO
        mostra_resultado("PRODUTO = ", multiplicacao(a, b));
    }else if(opcao_escolhida == 4){ //DIVISAO
        mostra_resultado("RAZAO = ", divisao(a, b));
    }
}

int main(){
    int opcao = le_inteiro();
    int x = le_inteiro();
    int y = le_inteiro();
    trevo(opcao, x, y);
}