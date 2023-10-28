#include<bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    int qtdOuro, qtdPrata, qtdBronze;
} Pais;

bool compara(Pais p1, Pais p2){
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
    int qtd;
    cin >> qtd;
    vector<Pais> vetPaises;
    Pais p;

    for(int i = 0; i < qtd; i++) {
        cin >> p.nome >> p.qtdOuro >> p.qtdPrata >> p.qtdBronze;
        vetPaises.push_back(p);
    }

    sort(vetPaises.begin(), vetPaises.end(), compara);

    for(int i = 0; i < vetPaises.size(); i++) {
        cout << vetPaises.at(i).nome << " " << vetPaises.at(i).qtdOuro << " " << vetPaises.at(i).qtdPrata << " " << vetPaises.at(i).qtdBronze << endl;
    }
}