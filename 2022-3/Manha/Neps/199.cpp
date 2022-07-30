#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> somaVet;
    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        int soma = 0;
        for(int j = 0; j < 3; j++){
            soma = soma + mat[i][j];
        }
        somaVet.push_back(soma);
    }

    for(int i = 0; i < somaVet.size(); i++){
        cout << "Linha " << i << ": " << somaVet.at(i) << endl;
    }
    
}