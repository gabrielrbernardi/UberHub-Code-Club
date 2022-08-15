#include <bits/stdc++.h> //Biblioteca
using namespace std;

int main(){
    int val;    //Declaracao de variavel
    cin >> val; //leitura de valor
    cout << "O valor de val eh: " << val << endl;
    //Impressao de mensagem na tela

    vector<int> vet; //Vetor dinamico
    int vet[10];     //Vetor estatico
    
    int aux;

    //Vetor Dinamico
    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }

    //Vetor estatico
    for(int i = 0; i < 10; i++){
        cin >> vet[i];
    }
    for(int i = 0; i < 10; i++){
        cout << vet[i] << endl;
    }

    int mat[3][3]; //Matriz de tamanho 3x3

    //Inserindo valores
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }

    //Mostrando valores
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    
}


