#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    string copia = str;
    reverse(copia.begin(), copia.end());
    if(copia == str){
        cout << "eh palindromo" << endl;
    }else{
        cout << "nao eh palindromo" << endl;
    }
}