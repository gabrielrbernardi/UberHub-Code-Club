#include<bits/stdc++.h>
using namespace std;

int main (){
    int qtdQuestoes, qtdAcertos = 0;
    string gabarito, respostaCandidato;
    cin >> qtdQuestoes;
    cin >> gabarito;
    cin >> respostaCandidato;
    for(int i = 0; i < qtdQuestoes; i++){
        if(gabarito.at(i) == respostaCandidato.at(i)){
            qtdAcertos++;
        }
    }   
    cout << qtdAcertos << endl;
}
