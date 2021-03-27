#include <bits/stdc++.h>
using namespace std;

int somaDe2Valores(int x, int y){
    return x + y;
}

long int triplo(long int x){
    return 3 * x;
}

float terco(float x){
    return x / 3.0;
}

string maiusculo(string x){
    for(int i = 0; i < x.size(); i++){
        if(x[i] == ' '){
            continue;
        }
        x[i] = x[i] - 32;
    }
    return x;
}

void imprime(){
    cout << "ola peassoas" << endl;
}

int main(){
    int val1, val2;
    cin >> val1 >> val2;
    cout << "A soma eh: " << somaDe2Valores(val1, val2) << endl;
    long int val3, resultadoTriplo;
    cin >> val3;
    resultadoTriplo = triplo(val3);
    cout << "O triplo eh: " << resultadoTriplo << endl;
    float val4;
    cin >> val4;
    cout << "A terca parte eh: " << terco(val4) << endl;
    // string frase;
    // getline(cin, frase);
    // cout << "A string maiuscula eh: " << maiusculo(frase) << endl;
    imprime();
}