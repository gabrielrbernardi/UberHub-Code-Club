#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }

    int linha;
    cin >> linha;
    int soma = 0;
    for(int j = 0; j < 3; j++){
        soma += mat[linha][j];
    }
    cout << "A soma dos elementos da linha " << linha << " eh: " << soma << endl;
}
