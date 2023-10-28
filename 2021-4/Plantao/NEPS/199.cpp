#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            cin >> mat[linha][coluna];
        }
    }
    int soma[3] = {0,0,0};
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            soma[linha] = soma[linha] + mat[linha][coluna];
        }
    }
    for(int i = 0; i < 3; i++){
        cout << "Linha " << i << ": " << soma[i] << endl;
    }
}
