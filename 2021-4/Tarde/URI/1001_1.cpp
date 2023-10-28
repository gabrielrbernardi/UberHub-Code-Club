#include <bits/stdc++.h>
using namespace std;

int leInteiro(){
    int x;
    cin >> x;
    return x;
}

int soma(int x, int y){
    return x + y;
}

void imprimeInteiro(int val){
    cout << "X = " << val << endl;
}

int main(){
    int val1 = leInteiro();
    int val2 = leInteiro();
    int resultado = soma(val1, val2);
    imprimeInteiro(resultado);
}