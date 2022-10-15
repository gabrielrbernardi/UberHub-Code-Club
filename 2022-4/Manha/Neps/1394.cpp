#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    string str2 = str;
    reverse(str2.begin(), str2.end());
    if(str2 == str){
        cout << "eh palindromo" << endl;
    }else{
        cout << "nao eh palindromo" << endl;
    }
}