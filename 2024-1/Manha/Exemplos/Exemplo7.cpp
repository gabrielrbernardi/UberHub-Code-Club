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

void mostra_resultado(int a){
    cout << "SOMA = " << a << endl;
}

int main(){
    int x = le_inteiro();
    int y = le_inteiro();
    // int soma = soma(x, y);
    // mostra_resultado(soma);
    mostra_resultado(soma(x, y));
}