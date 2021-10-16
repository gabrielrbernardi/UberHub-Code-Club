#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtdQuestoes;
    cin >> qtdQuestoes;

    string gabarito, respostaAluno;
    cin >> gabarito;
    cin >> respostaAluno;

    int qtdAcertos = 0;
    for(int i = 0; i < gabarito.size(); i++){
        if(gabarito.at(i) == respostaAluno.at(i)){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}

