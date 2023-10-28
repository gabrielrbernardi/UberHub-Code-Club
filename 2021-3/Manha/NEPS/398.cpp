#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[50];
    cin >> str;
    char busca[2];
    cin >> busca;
    int qtd = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == busca[0]){
            qtd++;
        }
    }
    cout << qtd << endl;
}
