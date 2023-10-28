#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtdQuestoes;
    cin >> qtdQuestoes;

    string gabarito, respostasCandidato;
    cin >> gabarito;
    cin >> respostasCandidato;

    int qtdAcertos = 0;
    for(int i = 0; i < gabarito.size(); i++){
        if(gabarito.at(i) == respostasCandidato.at(i)){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}
