#include <bits/stdc++.h>
using namespace std;

typedef struct {
    string nome;
    int idade;
    double altura, peso;
} Pessoa;

int main(){
    vector<Pessoa> pessoasLista;
    for(int i = 0; i < 10; i++){
        Pessoa p;
        pessoasLista.push_back(p);
    }
    for(int i = 0; i < 10; i++){
        cin >> pessoasLista[i].nome;
        cin >> pessoasLista[i].idade;
        cin >> pessoasLista[i].altura;
        cin >> pessoasLista[i].peso;
    }

    for (int i = 0; i < 10; i++){
        cout << "Pessoa " << i+1 << endl;
        cout << "Nome: " << pessoasLista[i].nome << endl;
        cout << "Idade: " << pessoasLista[i].idade << endl;
        cout << "Altura: " << pessoasLista[i].altura << endl;
        cout << "Peso: " << pessoasLista[i].peso << endl;
    }
}