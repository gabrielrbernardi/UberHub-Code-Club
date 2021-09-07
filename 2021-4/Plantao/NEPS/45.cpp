#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int mat[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> mat[i][j];
        }
    }

    int maior;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int soma = 0;
            for(int x = 0; x < N; x++){
                if(i == x){
                    continue;
                }else{
                    soma += mat[x][j];
                }
            }
            for(int y = 0; y < N; y++){
                if(j == y){
                    continue;
                }else{
                    soma += mat[i][y];
                }
            }
            if(i == 0 && j == 0){
                maior = soma;
            }else{
                if(soma > maior){
                    maior = soma;
                }
            }
        }
    }
    cout << maior << endl;
}
