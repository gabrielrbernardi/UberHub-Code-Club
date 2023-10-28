#include <bits/stdc++.h>
using namespace std;

int main(){
    double altura;
    int qtdJogadores = 0;
    for(int i = 0; i < 8; i++){
        cin >> altura;
        if(altura > 1.8){
            qtdJogadores++;
        }
    }
    cout << qtdJogadores << " jogadores encontrados" << endl;
}
