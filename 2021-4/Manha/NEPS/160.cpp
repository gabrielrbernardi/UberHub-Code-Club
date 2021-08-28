#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtdQuestoes, qtdAcertos = 0;
    cin >> qtdQuestoes;
    string gabarito, respCandidato;
    cin >> gabarito;
    cin >> respCandidato;
    for(int i = 0; i < qtdQuestoes; i++){
        if(gabarito.at(i) == respCandidato.at(i)){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}
