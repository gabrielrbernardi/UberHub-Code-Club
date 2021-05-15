#include <bits/stdc++.h>

using namespace std;

int main(){
    char str[50] = "uberhub";
    cout << strlen(str) << endl;

    int qtdChar = 0;
    for(int i = 0; i < 50; i++){
        if(str[i] == '\0'){
            break;
        }else{
            qtdChar++;
        }
    }
    cout << qtdChar << endl;
}