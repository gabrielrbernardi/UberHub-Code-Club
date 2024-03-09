#include <bits/stdc++.h>
using namespace std;

int main(){
    string gabarito, opcoes_marcadas;
    int qtd_questoes;
    cin >> qtd_questoes;
    cin >> gabarito >> opcoes_marcadas;

    int qtd_acertos = 0;

    for(int i = 0; i < qtd_questoes; i++){
        if (gabarito.at(i) == opcoes_marcadas.at(i)) {
            qtd_acertos++;
        }
    }
    cout << qtd_acertos << endl;
}