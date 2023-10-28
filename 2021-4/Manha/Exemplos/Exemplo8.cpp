#include <bits/stdc++.h>
using namespace std;
/*
    xCalcular n vezes um valor inteiro
    xCalcular a quinta parte de um valor real
    xRetornar uma string sem espacos
    xMostrar os 100 primeiros valores positivos (inteiros)
    xMostrar os n primeiros valores positivos (inteiros)
*/

int calculaNVezes(int valor, int multiplica){
    int resultado = valor * multiplica;
    return resultado;
}

double quintaParte(float valorBase){
    return valorBase / 5.0;
}

string semEspacos(string str){
    string novaString = "";
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) != ' '){
            novaString.push_back(str.at(i));
        }else{
            cout << "Achei um espaco" << endl;
        }
    }
    return novaString;
}

///funcao sem entrada e sem saida
void mostra100(){
    for(int i = 1; i <= 100; i++){
        cout << i << " ";
    }
    cout << endl;
}

///funcao que tem entrada mas nao tem saida
void mostraN(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    cout << calculaNVezes(3, 10) << endl;
    double resultado = quintaParte(11);
    cout << resultado << endl;
    string str = "UberHub Code Club";
    cout << semEspacos(str) << endl;
    mostra100();
    mostraN(10);
}
