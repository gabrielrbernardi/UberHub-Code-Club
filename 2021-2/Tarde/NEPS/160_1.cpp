#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtdAcertos = 0, qtdQuestoes;
    cin >> qtdQuestoes;
    string gabarito, resposta;
    cin >> gabarito;
    cin >> resposta;
    for(int i = 0; i < qtdQuestoes; i++){
        if(gabarito.at(i) == resposta.at(i)){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}