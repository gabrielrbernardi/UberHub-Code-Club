#include <bits/stdc++.h>
using namespace std;

int leitura(){
    int x;
    cin >> x;
    return x;
}

int soma(int x, int y){
    return x + y;
}

void imprimeMensagem(int soma){
    cout << "X = " << soma << endl;
}

int main(){
    int val1 = leitura();
    int val2 = leitura();
    int resultado = soma(val1, val2);
    imprimeMensagem(resultado);
}

