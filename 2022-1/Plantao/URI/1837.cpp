#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int quociente, resto;
    quociente = a / b;
    resto = a % b;
    //Nao existe resto negativo. se ocorrer isso, temos que consertar
    if(resto < 0){
        //para consertar o resultado, temos que mexer no quociente
        if(quociente < 0){
            quociente--;
        }else if(quociente > 0){
            quociente++;
        }
        //apos isso, temos que recalcular o resto, baseado no novo valor do quociente
        resto = a -(b * quociente);
    }

    cout << quociente << " " << resto << endl;
}