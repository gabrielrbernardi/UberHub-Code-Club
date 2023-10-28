#include <bits/stdc++.h>

using namespace std;

int main(){
    char nome1[50], nome2[50];
    char palavra[50];
    int qtdPos;
    cin >> nome1 >> nome2;
    if(strcmp(nome1, "Reluew") == 0 && strcmp(nome2, "Markinhos") == 0){
        cin >> qtdPos;
        cin >> palavra;
        for(int i = 0; i < strlen(palavra); i++){
            palavra[i] += qtdPos;
        }
        cout << palavra << endl;
    }else{
        cout << "Nao eh possivel descriptografar!" << endl;
    }
}