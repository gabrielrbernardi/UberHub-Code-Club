#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        int quadrados;
        cin >> quadrados;
        unsigned long long int qtdGraos = pow(2, quadrados);
        unsigned long long int qtdGramas = qtdGraos/12;
        unsigned long long int qtdKilos = qtdGramas/1000;
        cout << qtdKilos << " kg" << endl;
    }
}
