#include<bits/stdc++.h>
using namespace std;

int main(){
    int qtdQuestao;
    string gabarito, questoesCandidato;
    cin >> qtdQuestao;
    cin >> gabarito >> questoesCandidato;
    int qtdAcertos = 0;
    
    for(int i = 0; i < qtdQuestao; i++){
        if(gabarito.at(i) == questoesCandidato.at(i)){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}