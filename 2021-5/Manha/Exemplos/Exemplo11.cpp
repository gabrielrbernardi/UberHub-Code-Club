#include <bits/stdc++.h>
using namespace std;
/*
    xFazer uma funcao que retorne o triplo de um valor inteiro
    xFazer uma funcao para retornar o produto entre tres valores
    xFazer uma funcao que retorne um oitavo de um valor
    xFazer uma funcao para retornar uma mensagem de bom dia, com um nome (ex: "bom dia, gabriel!")
    xFazer uma funcao para mostrar uma saudacao (ex: "ola, tudo bem?")
    xFazer uma funcao para mostrar uma saudacao com um nome (ex: "ola, tudo bem gabriel?")
*/

int triplo(int x){
    return 3*x;
}

long int produto(int x, int y, int z){
    return x * y * z;
}

double oitava(double val){
    return val / 8.0;
}

string imprimeMensagem(string nome){
    return "bom dia, " + nome + "!";
}

void imprimeSaudacao(){
    cout << "ola, tudo bem?" << endl;
}

void imprimeOutraSaudacao(string nome){
    cout << "ola, tudo bem " + nome + " ?" << endl;
}

int retorna2(){
    return 2;
}

int main(){
    cout << "O triplo de 3 eh: " << triplo(3) << endl;
    cout << "O produto entre 1,2 e 3 eh: " << produto(1, 2, 3) << endl;
    cout << "A oitava parte de 80 eh: " << oitava(80.0) << endl;
    cout << "A mensagem eh: " << imprimeMensagem("jose") << endl;
    imprimeSaudacao();
    imprimeOutraSaudacao("jose");
    cout << "O valor de 2 eh : " << retorna2() << endl;

    return 0;
}
