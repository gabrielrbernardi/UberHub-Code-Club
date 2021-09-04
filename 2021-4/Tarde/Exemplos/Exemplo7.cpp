#include <bits/stdc++.h>
using namespace std;

/*
    xMultiplicar dois valores inteiros
    xDecima parte de um valor
    xRetornar uma string sem espacos
    xLer um valor e retornar ele
    xMostrar os n primeiros valores positivos
    xMostrar os 10 primeiros valores inteiros positivos
    xMostrar um valor inteiro
*/

int multiplica(int x, int y){
    return x * y;
}

double decimaParte(double x){
    double resultado = x / 10.0;
    return resultado;
}

string semEspacos(string str){
    string nova;
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) != ' '){
            nova.push_back(str.at(i));
        }
    }
    return nova;
}

int leInteiro(){
    int x;
    cin >> x;
    return x;
}

void mostraN(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;
}

void mostra10(){
    for(int i = 1; i <= 10; i++){
        cout << i << " ";
    }
    cout << endl;
}

void imprimeInteiro(int val){
    cout << val << endl;
}

int main(){
    cout << multiplica(30, 3) << endl;
    double resultado = decimaParte(100.0);
    cout << resultado << endl;

    cout << semEspacos("UberHub Code Club") << endl;

    int valor = leInteiro();
    cout << valor << endl;

    mostraN(15);
    mostra10();
    imprimeInteiro(100);
}
