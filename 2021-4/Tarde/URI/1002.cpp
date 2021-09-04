#include <bits/stdc++.h>
using namespace std;

double quadrado(double valor){
    return valor * valor;
}

double produto(double val1, double val2){
    return val1 * val2;
}

int main(){
    double raio, pi = 3.14159;
    cin >> raio;
    double resultado = produto(pi, quadrado(raio));
    printf("%.4lf\n", resultado);
}
