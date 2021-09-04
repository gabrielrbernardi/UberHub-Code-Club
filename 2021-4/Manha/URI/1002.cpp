#include <bits/stdc++.h>
using namespace std;

double quadrado(double val){
    return val * val;
}

int main() {
    int raio;
    cin >> raio;
    double resultado = 3.14159 * quadrado(raio);
    printf("A=%.4lf\n", resultado);
}
