#include <bits/stdc++.h>
using namespace std;

int main(){
    string operacao;
    cin >> operacao;

    double v1, v2, resultado;
    cin >> v1 >> v2;
    if(operacao == "M"){
        resultado = v1 * v2;
    }else{
        resultado = v1 / v2;
    }
    cout << fixed;
    cout << setprecision(2) << resultado << endl;
}