#include<bits/stdc++.h>

using namespace std;

typedef struct {
    string nome;
    int peso, idade;
    double altura;
} Elfo;

bool compara(Elfo e1, Elfo e2){
    if(e1.peso != e2.peso){
        return e1.peso > e2.peso;
    }
    if(e1.idade != e2.idade){
        return e1.idade < e2.idade;
    }
    if(e1.altura != e2.altura){
        return e1.altura < e2.altura;
    }
    return e1.nome < e2.nome;
}

int main(){
    int qtdCenarios;
    cin >> qtdCenarios;

    for(int i = 0; i < qtdCenarios; i++) {
        int qtdTotalElfos, qtdEscolhidaElfos;
        cin >> qtdTotalElfos >> qtdEscolhidaElfos;
        vector<Elfo> vetElfo;
        Elfo e;

        for(int j = 0; j < qtdTotalElfos; j++) {
            cin >> e.nome >> e.peso >> e.idade >> e.altura;
            vetElfo.push_back(e);
        }

        sort(vetElfo.begin(), vetElfo.end(), compara);

        cout << "CENARIO {" << i+1 << "}" << endl;
        for(int j = 0; j < qtdEscolhidaElfos; j++) {
            cout << j+1 << " - " << vetElfo.at(j).nome << endl;
        }
    }
}