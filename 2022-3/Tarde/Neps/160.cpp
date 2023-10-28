#include<bits/stdc++.h>
using namespace std;

int main(){
    string gabarito, resposta;
    int qtdQuestoes;
    cin >> qtdQuestoes;
    cin >> gabarito >> resposta;
    int qtdAcertos = 0;
    for(int i = 0; i < qtdQuestoes; i++){
        if(gabarito.at(i) == resposta.at(i)){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}