#include <bits/stdc++.h>
using namespace std;

/*
Faca a soma de 2 numeros inteiros, quando a senha inserida for a correta
*/

int main(){
    string str;
    string senha = "computador";
    int contador = 0;

    while(1){
        cin >> str;
        if(str == senha){
            break;
        }else{
            contador++;
        }
        if(contador == 3){
            cout << "tente novamente mais tarde" << endl;
            return 0;
        }
    }
    int n1, n2;
    cin >> n1 >> n2;
    cout << "A SOMA EH " << n1+n2 << endl;
}