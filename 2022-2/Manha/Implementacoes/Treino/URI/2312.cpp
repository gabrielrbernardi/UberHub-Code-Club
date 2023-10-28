#include<bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    int qtdOuro, qtdPrata, qtdBronze;
} Pais;

bool compare(Pais p1, Pais p2){
    if(p1.qtdOuro != p2.qtdOuro){
        return p1.qtdOuro > p2.qtdOuro;
    }
    if(p1.qtdPrata != p2.qtdPrata){
        return p1.qtdPrata > p2.qtdPrata;
    }
    if(p1.qtdBronze != p2.qtdBronze){
        return p1.qtdBronze > p2.qtdBronze;
    }
    return p1.nome < p2.nome;
}

int main(){
    vector<Pais> vetPais;
    Pais p;

    int qtd;
    cin >> qtd;

    for(int i = 0; i < qtd; i++) {
        cin >> p.nome >> p.qtdOuro >> p.qtdPrata >> p.qtdBronze;
        vetPais.push_back(p);
    }

    sort(vetPais.begin(), vetPais.end(), compare);

    for(int i = 0; i < vetPais.size(); i++) {
        cout << vetPais.at(i).nome << " " << vetPais.at(i).qtdOuro << " " << vetPais.at(i).qtdPrata << " " << vetPais.at(i).qtdBronze << endl;
    }
}