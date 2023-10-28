#include <bits/stdc++.h>
using namespace std;

//ler duas strings, junta-las e verificar se o resultado eh palindromo

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    string str3;
    str3 = str1 + str2;
    string copia = str3;
    reverse(copia.begin(), copia.end());

    if(copia != str3){
        cout << "NAO SAO PALINDROMAS" << endl;
    }else{
        cout << "SAO PALINDROMAS" << endl;
    }
}