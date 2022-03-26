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

    p.nome="Brasil";
    p.qtdOuro=2;
    p.qtdPrata=3;
    p.qtdBronze=4;
    vetPais.push_back(p);
    
    p.nome="Argentina";
    p.qtdOuro=1;
    p.qtdPrata=3;
    p.qtdBronze=3;
    vetPais.push_back(p);
    
    p.nome="Russia";
    p.qtdOuro=10;
    p.qtdPrata=2;
    p.qtdBronze=2;
    vetPais.push_back(p);
    
    p.nome="Zambia";
    p.qtdOuro=2;
    p.qtdPrata=3;
    p.qtdBronze=3;
    vetPais.push_back(p);

    sort(vetPais.begin(), vetPais.end(), compare);

    for(int i = 0; i < 4; i++) {
        cout << endl << "Pais " << i << endl;
        cout << "Nome Pais: " << vetPais.at(i).nome << endl;
        cout << "qtd ouro: " << vetPais.at(i).qtdOuro << endl;
        cout << "qtd prata: " << vetPais.at(i).qtdPrata << endl;
        cout << "qtd bronze: " << vetPais.at(i).qtdBronze << endl;
    }
}