#include <bits/stdc++.h>
using namespace std;

int main(){
    string opcao;
    cin >> opcao;
    float resultado, val1, val2;
    cin >> val1 >> val2;
    if(opcao.at(0) == 'D'){ ///Faz a divisao
        resultado = val1 / val2;
    }else{
        resultado = val1 * val2;
    }
    printf("%.2f\n", resultado);
}
