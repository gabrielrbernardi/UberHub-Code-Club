#include <bits/stdc++.h>

using namespace std;

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    
    cout << "Digite o valor que deseja buscar: ";
    int busca;
    cin >> busca;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] == busca){
                cout << "O valor esta na linha " << i << " e na coluna " << j << endl;
            }
        }
    }
}