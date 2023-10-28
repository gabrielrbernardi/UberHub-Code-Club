#include <bits/stdc++.h>
using namespace std;
/*
    funcao que receba 2 valores inteiros e retorne a soma deles
    funcao que retorne o triplo de um valor real
    funcao que retorne se um determinado numero inteiro eh menor que 100
    funcao que mostre uma mensagem de bom dia
    funcao que mostre uma mensagem de bom dia com um nome
    funcao que retorne uma mensagem qualquer
*/

int soma(int x, int y){
    int soma = x + y;
    return soma;
}

int triplo(double val){
    return val * 3;
}

string ehMenorQue100(int x){
    if(x < 100){
        return "eh menor que 100";
    }else{
        return "nao eh menor que 100";
    }
}

string saudacaoSimples01(){
    return "bom dia";
}

void saudacaoSimples(){
    cout << saudacaoSimples01() << endl;
}

void saudacaoComplexa(string nome){
    cout << saudacaoSimples01() << ", " << nome << endl;
}

string retornaNome(){
    string nome;
    cin >> nome;
    return nome;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << soma(a,b) << endl;
    cout << triplo(27.3) << endl;
    int val = 150;
    cout << ehMenorQue100(val) << endl;
    saudacaoSimples(); 
    saudacaoComplexa(retornaNome());
}