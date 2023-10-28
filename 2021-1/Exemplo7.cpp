#include <bits/stdc++.h>
using namespace std;
int main(){
    int mat[10][10];
    int valor = 12;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++, valor+=2){
            mat[i][j] = valor;
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}