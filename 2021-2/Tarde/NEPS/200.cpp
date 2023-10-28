#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    int soma[3] = {0, 0, 0};
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            soma[j] += mat[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        cout << "Coluna " << i << ": " << soma[i] << endl;
    }
}