#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    string strInvertida = str;

    reverse(strInvertida.begin(), strInvertida.end());

    if(strInvertida == str){
        cout << "eh palindromo" << endl;
    }else{
        cout << "nao eh palindromo" << endl;
    }
}
