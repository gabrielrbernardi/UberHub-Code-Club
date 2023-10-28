#include <bits/stdc++.h>
using namespace std;

int main(){
    int hora, minuto, acao, qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> hora >> minuto >> acao;

        printf("%02d", hora);
        cout << ":";

        printf("%02d", minuto);
        cout << " - ";

        if(acao == 0){
            cout << "A porta fechou!" << endl;
        }else{
            cout << "A porta abriu!" << endl;
        }
    }
}
