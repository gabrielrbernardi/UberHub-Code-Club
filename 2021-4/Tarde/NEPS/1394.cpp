#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, str2;
    cin >> str;
    str2 = str; ///copia o conteudo da str para str2

    reverse(str2.begin(), str2.end()); ///invertendo a str2

    if(str == str2){ ///Compara as duas strings
        cout << "eh palindromo" << endl;
    }else{
        cout << "nao eh palindromo" << endl;
    }
}
