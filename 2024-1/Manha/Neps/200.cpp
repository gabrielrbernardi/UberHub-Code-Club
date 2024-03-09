#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    vector<int> soma_das_colunas;
    for(int j = 0; j < 3; j++){
        int soma = 0;
        for(int i = 0; i < 3; i++){
            soma = soma + mat[i][j];
        }
        soma_das_colunas.push_back(soma);
    }

    for(int i = 0; i < soma_das_colunas.size(); i++){
        cout << "Coluna " << i << ": " << soma_das_colunas.at(i) << endl;
    }
}