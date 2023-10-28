#include <bits/stdc++.h>

using namespace std;

int main(){
    char str1[20], str2[20];
    scanf("%s", str1);
    scanf("%s", str2);
    if(strcmp(str1, str2) == 0){
        cout << "Sao iguais" << endl;
    }else{
        cout << "Sao diferentes" << endl;
    }
}