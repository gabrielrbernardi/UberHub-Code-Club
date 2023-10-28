#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mat1[n][n], mat2[n][n], resultado[n][n];
    
    //leitura das matrizes
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat1[i][j];           
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat2[i][j];           
        }
    }
    
    //calculo da qtd de chuva
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            resultado[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
    
}