#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int mat[N][N];

    ///preenchendo a matriz
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> mat[i][j];
        }
    }
    ///pedra branca - 0
    ///pedra preta - 1
    int pedraA, pedraB, pedraC; ///pedraA: i-1, j-1; pedraB: i-1, j; pedraC: i, j-1
    for(int i = 1; i < N; i++){
        for(int j = 1; j < N; j++){
            pedraA = mat[i-1][j-1];
            pedraB = mat[i-1][j];
            pedraC = mat[i][j-1];
            int soma = pedraA + pedraB + pedraC;
            if(soma == 0 || soma == 1){ ///indica que ha apenas 0 ou 1 pedra preta e 2 ou 3 brancas, portanto preenche com pedra preta
                mat[i][j] = 1;
            }else if(soma == 2 || soma == 3){ ///Indica que ha 2 ou 3 pedras pretas e 1 ou 0 brancas, portanto preenche com pedra branca
                mat[i][j] = 0;
            }
        }
    }
    cout << mat[N-1][N-1] << endl;
}
