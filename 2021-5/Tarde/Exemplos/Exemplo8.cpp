#include <bits/stdc++.h>
using namespace std;

/*
    xFazer uma funcao que retorne 5 vezes o valor de um numero inteiro
    xFazer uma funcao que retorne o produto entre 4 valores inteiros
    xFazer uma funcao que retorne 1/12 de um valor real
    xFazer uma funcao para desejar para alguem "boa noite"
    xFazer uma funcao para imprimir a tabuada de um valor
    xFazer uma funcao para ler dois valores e imprimir a soma entre eles
    xFazer uma funcao para imprimir uma mensagem (ex.: "ola, tudo bem?")
    Fazer uma funcao para imprmir uma mensagem de bom dia, com o nome da pessoa
*/

int cincoVezes(int x){
    return 5 * x;
}

int produto(int a, int b, int c, int d){
    return a * b * c * d;
}

double divide(double x){
    return x / 12.0;
}

string imprimeMensagem(string nome){
    return "boa noite " + nome;
}

void tabuada(int val){
    for(int i = 1; i <= 10; i++){
        cout << val << " x " << i << " = " << val*i << endl;
    }
}

void soma(){
    int a, b;
    cin >> a >> b;
    cout << a+b << endl;
}

void imprimeMensagem1(){
    cout << "ola, tudo bem?" << endl;
}

void imprimeBomDia(string nome){
    cout << "bom dia " + nome << endl;
}

int retorna2(){
    return 2;
}

int main(){
    cout << "5 vezes o valor 25 eh: " << cincoVezes(25) << endl;
    cout << "O produto entre 1,2,3 e 4 eh: " << produto(1,2,3,4) << endl;
    cout << "1/12 de 144 eh: " << divide(144.0) << endl;
    cout << "A mensagem eh: " << imprimeMensagem("jose") << endl;

    tabuada(7);
    soma();
    imprimeMensagem1();
    imprimeBomDia("Joao");

    cout << "O valor de 2 eh: " << retorna2() << endl;
}
