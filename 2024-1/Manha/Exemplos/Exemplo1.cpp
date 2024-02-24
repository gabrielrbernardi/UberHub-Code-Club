#include <bits/stdc++.h>
using namespace std;

/*
Ler a quantidade de notas a serem adicionadas
Calcular a media das notas dos alunos
Inverter os valores do vetor
Mostrar quantas vezes o valor 3 apareceu
Mostrar quantas notas foram inseridas
*/

int main(){
    vector<int> vet;
    int qtd, aux;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){ //adicionando os valores no vetor
        cin >> aux;
        vet.push_back(aux);
    }
    
    for(int i = 0; i < qtd; i++){ //mostra os valores no vetor
        cout << vet.at(i) << " ";
    }
    cout << endl;
    
    double media;
    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma = soma + vet.at(i);
    }
    
    cout << "Media: " << soma / (double) vet.size() << endl;

    reverse(vet.begin(), vet.end());

    for(int i = 0; i < qtd; i++){ //mostra os valores no vetor
        cout << vet.at(i) << " ";
    }
    cout << endl;

    cout << "A quantidade de vezes que 3 apareceu eh: " << count(vet.begin(), vet.end(), 3) << endl;

    cout << "A quantidade de notas eh: " << vet.size() << endl;
}