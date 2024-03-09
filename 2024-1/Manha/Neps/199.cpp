#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    vector<int> soma_das_linhas;
    for(int i = 0; i < 3; i++){
        int soma = 0;
        for(int j = 0; j < 3; j++){
            soma = soma + mat[i][j];
        }
        soma_das_linhas.push_back(soma);
    }

    for(int i = 0; i < soma_das_linhas.size(); i++){
        cout << "Linha " << i << ": " << soma_das_linhas.at(i) << endl;
    }
}