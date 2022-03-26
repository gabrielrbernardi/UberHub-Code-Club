#include<bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    int peso, idade;
    double altura;
} Elfo;

bool compare(Elfo e1, Elfo e2){
    if(e1.peso != e2.peso){
        return e1.peso > e2.peso;
    }
    if(e1.idade != e2.idade){
        return e1.idade < e2.idade;
    }
    if(e1.altura != e2.altura){
        return e1.altura < e2.altura;
    }
    return e1.nome > e2.nome;
}

int main(){
    vector<Elfo> vetElfo;
    Elfo e;

    int qtdCasos, qtdTotalRenas, qtdRenasSelecionadas;
    cin >> qtdCasos;

    for(int i = 0; i < qtdCasos; i++) {
        vetElfo.clear();
        cin >> qtdTotalRenas >> qtdRenasSelecionadas;
        for(int j = 0; j < qtdTotalRenas; j++) {
            cin >> e.nome >> e.peso >> e.idade >> e.altura;
            vetElfo.push_back(e);
        }

        sort(vetElfo.begin(), vetElfo.end(), compare);

        cout << "CENARIO {" << i+1 << "}" << endl;
        for(int j = 0; j < qtdRenasSelecionadas; j++) {
            cout << j+1 << " - " << vetElfo.at(j).nome << endl;
            // cout << vetElfo.at(j).nome << " " << vetElfo.at(j).peso << " " << vetElfo.at(j).idade << " " << vetElfo.at(j).altura << endl;
        }
    }
}