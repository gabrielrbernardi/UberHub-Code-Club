#include <bits/stdc++.h>
using namespace std;

/* digite os valores e mostre a soma de uma determinada linha da matriz*/

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){ ///seleciona qual 'vetor' será utilizado
        for(int j = 0; j < 3; j++){ ///seleciona qual 'coluna' será utilizada
            cin >> mat[i][j];
        }
    }

    int linha;
    cout << "Digite a linha onde sera feita a soma: ";
    cin >> linha;

    int soma = 0;
    for(int j = 0; j < 3; j++){
        soma += mat[linha][j];
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "A soma dos elementos da linha " << linha << " eh: " << soma << endl;
}
