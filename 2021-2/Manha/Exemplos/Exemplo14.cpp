#include <bits/stdc++.h>
using namespace std;
///Fazer funcoes para calcular:
    ///Soma de 2 valores (int)
    ///Divisao de 2 valores (float)
        ///Metade de um valor (float)
    ///Juntar duas strings
    ///Imprimir 'bom dia' (void)

int soma(int x, int y){
    return x + y;
}

float divisao(float x, float y){
    return x / y;
}

float metade(float x){
    return x / 2.0;
}

string junta(string x, string y){
    return x + y;
//    x.append(y);
//    return x;
}

void imprime(){
    cout << "bom dia" << endl;  /// -> bom dia
}

void soma2(int x, int y){
    cout << x + y << endl;
}

int main(){
    cout << soma(3, 5) << endl; /// -> 8
    cout << divisao(10.0, 4.0) << endl; /// -> 2.5
    cout << metade(5.0) << endl; /// -> 2.5
    cout << junta("uberhub", "code club") << endl; /// -> uberhubcode club
    soma2(3, 5);
    imprime(); /// ->
    int var = soma(3, 5) - 3;
    cout << var << endl; /// -> 5
}
