#include <bits/stdc++.h>
using namespace std;
/*
    *Armazenar a nota de 10 alunos
    *Calcular a media das notas dos alunos
    *Imprimir as notas dos alunos
    *Imprimir na ordem inversa a nota dos alunos
*/
int main(){
    vector<float> notas;
    float aux;
    for(int i = 0; i < 10; i++){ ///Leitura dos valores do vetor
        cin >> aux;
        notas.push_back(aux);
    }
    float soma = 0.0;
    for(int i = 0; i < notas.size(); i++){ ///Calculando a soma dos elementos do vetor
        soma = soma + notas.at(i);
    }
    float media = soma / notas.size();     ///Calculando a media aritmetica
    cout << "Media: " << media << endl;

    for(int i = 0; i < notas.size(); i++){ ///Imprimindo os valores do vector
        cout << "notas[" << i << "] = " << notas.at(i) << endl;
    }

    reverse(notas.begin(), notas.end());   ///Invertendo o vector
    cout << endl << "Vetor inverso" << endl;
    for(int i = 0; i < notas.size(); i++){ ///Imprimindo os valores do vector
        cout << "notas[" << i << "] = " << notas.at(i) << endl;
    }
}

///8.0 2.3 0.0 4.5 6.0 7.6 10.0 9.2 5.3 1.5
