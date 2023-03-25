#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, strInvertida;
    cin >> str;
    strInvertida = str;
    reverse(strInvertida.begin(), strInvertida.end());
    if(str == strInvertida){
        cout << "eh palindromo" << endl;
    }else{
        cout << "nao eh palindromo" << endl;
    }
}