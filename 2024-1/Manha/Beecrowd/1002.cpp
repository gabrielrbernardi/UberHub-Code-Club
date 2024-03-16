#include <bits/stdc++.h>
using namespace std;

double le_real(){
    double a;
    cin >> a;
    return a;
}

double retorna_pi(){
    return 3.14159;
}

double calcula_area(double r){
    return retorna_pi() * r * r;
}

void mostra_resultado(string text, int qtd_decimais, double val){
    cout << fixed;
    cout << text << setprecision(qtd_decimais) << val << endl;
}

void limpa(){
    setbuf(stdin, NULL); //limpa();
}

int main(){
    double raio = le_real();
    double area = calcula_area(raio);
    mostra_resultado("A=", 4, area);
}