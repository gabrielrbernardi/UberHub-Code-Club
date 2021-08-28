#include <bits/stdc++.h>
using namespace std;

int main(){
    float mat[12][12];
    char opcao;
    cin >> opcao;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }
    int x = 11, contador = 0;
    float soma = 0;
    for(int i = 0; i < 12 - 1; i++){
        for(int j = 0; j < x; j++){
            soma += mat[i][j];
            contador++;
        }
        x--;
    }
    if(opcao == 'M'){ ///indica que eh a media
        printf("%.1f\n", soma/(float) contador);
    }else{
        printf("%.1f\n", soma);
    }
}
