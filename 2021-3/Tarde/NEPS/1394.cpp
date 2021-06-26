#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, str2;
    cin >> str;
    str2 = str;
    reverse(str2.begin(), str2.end()); ///Inverte a string
    if(str == str2){
        cout << "eh palindromo" << endl;
    }else{
        cout << "nao eh palindromo" << endl;
    }
}
