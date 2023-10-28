#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome1, nome2;
    char palavra[50];
    int qtdPos;
    cin >> nome1 >> nome2;
    if(nome1 == "Reluew" && nome2 == "Markinhos"){
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