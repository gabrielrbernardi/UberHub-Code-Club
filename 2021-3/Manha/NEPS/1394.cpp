#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, aux;
    cin >> str;
    aux = str; ///Copia da string str
    reverse(aux.begin(), aux.end()); ///Inverte a string aux
    if(str == aux){ ///Compara as duas strings
        cout << "eh palindromo" << endl;
    }else{
        cout << "nao eh palindromo" << endl;
    }
}
