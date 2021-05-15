#include <bits/stdc++.h>

using namespace std;

int main(){
    char str1[20];
    scanf("%s", str1);
    cout << strlen(str1) << endl;
    int tam = 0;
    for(int i = 0; i < 20; i++){
        if(str1[i] == '\0'){
            break;
        }else{
            tam++;
        }
    }
    cout << tam << endl;
}