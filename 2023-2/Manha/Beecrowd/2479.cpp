#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd, qtdComportou = 0, qtdNaoComportou = 0;
    cin >> qtd;
    vector<string> nomes;
    for (int i = 0; i < qtd; i++){
        string comportou, nome;
        cin >> comportou >> nome;
        nomes.push_back(nome);
        if(comportou == "-"){
            qtdNaoComportou++;
        }else{
            qtdComportou++;
        }
    }
    sort(nomes.begin(), nomes.end());
    // for(int i = 0; i < nomes.size(); i++){
    //     cout << nomes[i] << endl;
    // }
    for(auto it: nomes){
        cout << it << endl;
    }
    cout << "Se comportaram: " << qtdComportou << " | Nao se comportaram: " << qtdNaoComportou << endl;
}