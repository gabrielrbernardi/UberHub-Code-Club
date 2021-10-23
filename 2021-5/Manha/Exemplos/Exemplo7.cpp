#include <bits/stdc++.h>
using namespace std;

/*Digitar e mostrar na tela os seguintes valores, nesse formato:
1 2 3
4 5 6
7 8 9
*/


int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){ ///seleciona qual 'vetor' será utilizado
        for(int j = 0; j < 3; j++){ ///seleciona qual 'coluna' será utilizada
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
