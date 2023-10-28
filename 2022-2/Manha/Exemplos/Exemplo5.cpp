#include<bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    int idade;
} Pessoa;

int main(){
    vector<Pessoa> vetPes;
    Pessoa p;

    for(int i = 0; i < 10; i++) {
        cin >> p.nome;
        cin >> p.idade;
        vetPes.push_back(p);
    }

    for(int i = 0; i < vetPes.size(); i++) {
        cout << endl << "Pessoa " << i << endl;
        cout << "Nome: " << vetPes.at(i).nome << endl;
        cout << "Idade: " << vetPes.at(i).idade << endl;   
    }
}