#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtdQuestoes;
    cin >> qtdQuestoes;
    char gabarito[qtdQuestoes], resposta[qtdQuestoes];
    scanf("%s", gabarito);
    scanf("%s", resposta);
    int qtdAcertos = 0;
    for(int i = 0; i < qtdQuestoes; i++){
        if(gabarito[i] == resposta[i]){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}