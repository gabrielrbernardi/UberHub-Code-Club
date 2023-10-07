#include <bits/stdc++.h>
using namespace std;

void mostraVetor(vector<int> vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << " ";
    }
    cout << endl;
}

int main(){
    int qtdCasosTeste = 0;
    cin >> qtdCasosTeste;
    for(int i = 0; i < qtdCasosTeste; i++){
        int qtdAlunos = 0, aux;
        cin >> qtdAlunos;
        vector<int> alunos, copiaAlunos;
        for(int j = 0; j < qtdAlunos; j++){
            cin >> aux;
            alunos.push_back(aux);
        }
        copiaAlunos = alunos;
        sort(copiaAlunos.begin(), copiaAlunos.end(), greater<int>());

        int qtdMudancas = 0;
        for(int j = 0; j < alunos.size(); j++){
            if(alunos[j] != copiaAlunos[j]){
                qtdMudancas++;
            }
        }
        cout << (qtdAlunos - qtdMudancas) << endl;
    }
}