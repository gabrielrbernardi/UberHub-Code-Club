#include <bits/stdc++.h>
using namespace std;

/*
    xFaca um programa que guarde as notas de 10 alunos.
    xMostre a média da nota dos alunos
    xMostre as notas em ordem crescente
    xMostre as notas em ordem decrescente
    xPermita inserir uma nota a mais
    xMostre os alunos que foram aprovados e os que foram reprovados (6.0)
*/

int main(){
    vector<float> notas;
    float aux, soma = 0.0, media;
    for(int i = 0; i < 10; i++){  ///Faz a leitura dos valores
        cin >> aux;
        notas.push_back(aux);
    }
    for(int i = 0; i < notas.size(); i++){   ///Percorre todo o vector
        soma += notas.at(i);                 ///Soma todos os elementos do vector
    }
    media = soma/notas.size();
    cout << "Media: " << media << endl;

    sort(notas.begin(), notas.end());        ///Ordena os valores em ordem crescente
    cout << "Ordem Crescente" << endl;
    for(int i = 0; i < notas.size(); i++){
        cout << "notas[" << i << "] = " << notas.at(i) << endl;
    }

    reverse(notas.begin(), notas.end());     ///Inverte os valores
    cout << "Ordem Decrescente" << endl;
    for(int i = 0; i < notas.size(); i++){
        cout << "notas[" << i << "] = " << notas.at(i) << endl;
    }

    cout << endl << endl;

    cout << "Digite a proxima nota: ";
    cin >> aux;
    notas.push_back(aux);

    soma = 0.0;
    for(int i = 0; i < notas.size(); i++){   ///Percorre todo o vector
        soma += notas.at(i);                 ///Soma todos os elementos do vector
    }
    media = soma/notas.size();
    cout << "Media: " << media << endl;

    sort(notas.begin(), notas.end());        ///Ordena os valores em ordem crescente
    cout << "Ordem Crescente" << endl;
    for(int i = 0; i < notas.size(); i++){
        cout << "notas[" << i << "] = " << notas.at(i) << endl;
    }

    reverse(notas.begin(), notas.end());     ///Inverte os valores
    cout << "Ordem Decrescente" << endl;
    for(int i = 0; i < notas.size(); i++){
        cout << "notas[" << i << "] = " << notas.at(i) << endl;
    }

    for(int i = 0; i < notas.size(); i++){   ///Verificando as notas aprovadas e reprovadas
        if(notas.at(i) < 6.0){
            cout << "Aluno " << i << ": Reprovado" << endl;
        }else{
            cout << "Aluno " << i << ": Aprovado" << endl;
        }
    }
}

///2.0 3.5 10.0 7.4 5.7 9.8 6.0 6.9 5.9 0.0
///8.0
