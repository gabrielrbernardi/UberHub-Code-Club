#include <bits/stdc++.h>

using namespace std;

int main(){
    char str[50], str2[50];
    cin >> str;

    strcpy(str2, str);

    if(strcmp(str, str2) == 0){
        cout << "sao iguais" << endl;
    }else{
        cout << "nao sao iguais" << endl;
    }
}