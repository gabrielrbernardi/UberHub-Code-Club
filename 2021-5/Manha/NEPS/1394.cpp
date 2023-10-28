#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;

    string str1 = str; //Faz a copia do conteudo da str para str1
    reverse(str1.begin(), str1.end()); //Invertendo a string

    if(str1 == str){
        cout << "eh palindromo" << endl;
    }else{
        cout << "nao eh palindromo" << endl;
    }
}

