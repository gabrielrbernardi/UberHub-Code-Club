#include<bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    int idade;
} Pessoa;

int main(){
    vector<Pessoa> vetPessoa;
    Pessoa p;
    for(int i = 0; i < 10; i++) {
        cout << i << endl;
        cin >> p.nome;
        cin >> p.idade;
        vetPessoa.push_back(p);
    }

    for(int i = 0; i < 10; i++) {
        cout << endl << "Pessoa " << i << endl;
        cout << "Nome: " << vetPessoa.at(i).nome << endl;
        cout << "Idade: " << vetPessoa.at(i).idade << endl;
    }
}

