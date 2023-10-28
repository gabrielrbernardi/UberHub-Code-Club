#include <bits/stdc++.h>
using namespace std;

int main(){
    char str1[50] = "teste";
    for(int i = 0; i < strlen(str1); i++){
        str1[i] = str1[i] + 2;
    }
    cout << str1 << endl;
}