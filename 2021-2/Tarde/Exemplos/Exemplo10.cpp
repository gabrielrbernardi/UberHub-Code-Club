#include <bits/stdc++.h>
using namespace std;
///criar funcoes para resolver esses problemas
    ///somar 2 valores (int)
    ///dividir 2 valores (float)
        ///terca parte de 1 valor (double)
    ///verificar se um numero eh par (bool)
    ///juntar 2 strings (string)
    ///imprimir uma saudacao "boa tarde" (void)

int soma(int x, int y){
    return x + y; ///Retorna a soma de x e y
}

float divide(float x, float y){
    return x / y; ///Retornar a divisao de x e y
}

double tercaParte(double x){
    return x / 3.0;
}

bool ehPar(int x){
    if(x % 2 == 0){
        return true;  ///x eh par
    }else{
        return false;  ///x nao eh par
    }
}

string junta(string x, string y){
    return x + " " + y;  ///retorna string concatenada
}

void imprime(){
    cout << "boa tarde" << endl;
}

string imprime2(){
    return "boa tarde";
}

int main(){
    cout << soma(5, 8) << endl;  /// -> 13
    cout << divide(15.0, 4.0) << endl; /// -> 3.75
    cout << tercaParte(20.0) << endl; /// -> 6.66
    if(ehPar(9) == true){   /// -> nao eh par
        cout << "eh par" << endl;
    }else{
        cout << "nao eh par" << endl;
    }
    cout << junta("uberhub", "code club") << endl;  /// -> uberhub code club
    imprime(); /// -> boa tarde
    cout << imprime2() << endl;
}
