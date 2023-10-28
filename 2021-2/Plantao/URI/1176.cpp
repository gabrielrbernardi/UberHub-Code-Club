#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtdVezes;
    unsigned long long int fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    int valor;
    cin >> qtdVezes;
    for(int i = 0; i < qtdVezes; i++){
        cin >> valor;
        cout << "Fib(" << valor << ") = " << fib[valor] << endl;
    }
}
