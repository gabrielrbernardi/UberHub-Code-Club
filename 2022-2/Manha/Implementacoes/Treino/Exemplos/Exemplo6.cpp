#include<bits/stdc++.h>

using namespace std;

typedef struct{
    int idade;
    string nome;    
} Pessoa;

int main(){
    map<int, Pessoa> mapa;
    Pessoa p;
    p.idade = 12;
    p.nome = "gabriel";
    mapa.insert({1, p});

    p.idade = 20;
    p.nome = "joao";
    mapa.insert({2, p});

    for(auto it: mapa) {
        cout << it.first << " " << it.second.nome << " " << it.second.idade << endl;
    }
    
}