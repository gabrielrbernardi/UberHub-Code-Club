#include <bits/stdc++.h>
using namespace std;

//ler uma string
//mostrar esse texto na tela
//inverter ele
//mostrar o resultado

void mostraString(string str){
    cout << str << endl;
}

int main(){
    string str;
    cin >> str;
    mostraString(str);
    reverse(str.begin(), str.end());
    mostraString(str);
}