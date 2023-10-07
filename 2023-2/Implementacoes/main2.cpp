#include <bits/stdc++.h>
using namespace std;

typedef struct {
    string nome;
    int idade;
    double altura, peso;
} Pessoa;

int main(){
    Pessoa pessoa;

    Pessoa joao, maria;

    Pessoa pessoas[10];

    vector<Pessoa> pessoasLista;
    for(int i = 0; i < 10; i++){
        Pessoa p;
        pessoasLista.push_back(p);
    }

    joao.idade = 15;

    maria.altura = 1.54;

    pessoas[3].peso = 63;
    
    pessoasLista[0].nome = "Jose";


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