#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtdQuestoes;
    string gabarito, opcoesAluno;
    cin >> qtdQuestoes;
    cin >> gabarito;
    cin >> opcoesAluno;
    int qtdAcertos = 0;
    for(int i = 0; i < qtdQuestoes; i++){
        if(gabarito.at(i) == opcoesAluno.at(i)){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}