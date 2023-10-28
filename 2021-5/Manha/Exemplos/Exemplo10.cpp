#include <bits/stdc++.h>
using namespace std;

/* digite os valores e mostre a soma da diagonal principal da matriz*/

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){ ///seleciona qual 'vetor' será utilizado
        for(int j = 0; j < 3; j++){ ///seleciona qual 'coluna' será utilizada
            cin >> mat[i][j];
        }
    }

    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                soma += mat[i][j];
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "A soma dos elementos da diagonal eh: " << soma << endl;
}
