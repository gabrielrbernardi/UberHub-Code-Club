#include<bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    int idade;
} Pessoa;

int main(){
    Pessoa p;
    cin >> p.nome;
    cin >> p.idade;
    cout << p.nome << endl;
    cout << p.idade << endl;
}