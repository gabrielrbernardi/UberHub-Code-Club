#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, qtdComportados = 0, qtdNaoComportados = 0;
    cin >> n;
    string comportamento, nome;
    vector<string> vet;
    for(int i = 0; i < n; i++){
        cin >> comportamento;
        cin >> nome;

        if(comportamento == "+"){
            qtdComportados++;
        }else{
            qtdNaoComportados++;
        }
        vet.push_back(nome);
    }
    sort(vet.begin(), vet.end());
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n", qtdComportados, qtdNaoComportados);
}