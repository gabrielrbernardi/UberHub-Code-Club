#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    string str2;
    str2 = str; // Faz copia da str para str2
    reverse(str2.begin(), str2.end());
    if(str == str2){
        cout << "eh palindromo" << endl;
    }else{
        cout << "nao eh palindromo" << endl;
    }
}