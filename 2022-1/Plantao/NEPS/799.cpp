#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome1, nome2;
    cin >> nome1 >> nome2;
    if(nome1 == "Reluew" && nome2 == "Markinhos"){
        int deslocamento;
        cin >> deslocamento;
        char palavra[50];
        cin >> palavra;
        for(int i = 0; i < strlen(palavra); i++){
            palavra[i] = palavra[i] + deslocamento;
        }
        cout << palavra << endl;
    }else{
        cout << "Nao eh possivel descriptografar!" << endl;
    }
}