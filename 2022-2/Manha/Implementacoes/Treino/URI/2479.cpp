#include <bits/stdc++.h>
using namespace std;

void mostraVetor(vector<string> &vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }
}


int main(){
    int qtd, qtdComportado = 0, qtdNaoComportado = 0;
    cin >> qtd;
    vector<string> vet;
    string comportamento, nome;   
    for(int i = 0; i < qtd; i++){
        cin >> comportamento;
        cin >> nome;

        if(comportamento == "+"){
            qtdComportado++;
        }else{
            qtdNaoComportado++;
        }
        vet.push_back(nome);
    }
    sort(vet.begin(), vet.end());
    mostraVetor(vet);
    printf("Se comportaram: %d | Nao se comportaram: %d\n", qtdComportado, qtdNaoComportado);
}
