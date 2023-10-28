#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtdQuestoes, qtdAcertos = 0;
    cin >> qtdQuestoes;
    char gabarito[qtdQuestoes], resposta[qtdQuestoes];
    scanf("%s", gabarito);
    scanf("%s", resposta);
    for(int i = 0; i < qtdQuestoes; i++){
        if(gabarito[i] == resposta[i]){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}