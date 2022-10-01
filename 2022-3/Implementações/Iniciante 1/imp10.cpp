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
    
    string str;

    cin >> str;                      //Le string ate ' '
    getline(cin, str);               //Le string ate '\n'
    str.size();                      //Retorna tamanho da string
    str.at(1);                       //Retorna caractere na posicao 1
    str.push_back('.');              //Adiciona o caractere '.'
    str.append("fim");               //Adiciona a string "fim"
    str.erase(0, str.length());      //Apaga o trecho especificado
    reverse(str.begin(), str.end()); //Inverte a string

}


